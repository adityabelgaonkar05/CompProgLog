#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define endl '\n'
using namespace std;

/*
  Aggressive automated tuner — fixed compilation issues:
  - frexpl exponent uses int32_t to avoid conflict with '#define int long long'
  - size-type mismatches cast to size_t
  - entry point is signed main() so return type is valid despite macro
*/

enum Prec { H = 1, S = 2, D = 3 };

struct Algo {
    Prec typ;
    vector<int> indices;                  // positive ints for direct indices; 0 for nested placeholder
    vector<unique_ptr<Algo>> nested;      // nested algos corresponding to placeholders
};

double quantize_to_fp16(double x) {
    if (std::isnan(x)) return std::numeric_limits<double>::quiet_NaN();
    if (x == 0.0) return 0.0;
    if (std::isinf(x)) return x;

    bool neg = std::signbit(x);
    long double ax = fabsl(x);

    // use int32_t so frexpl gets an int*
    int32_t e;
    long double m = frexpl(ax, &e); // ax = m * 2^e

    int E = (int)e - 1;
    const int Emax = 15;
    const int Emin = -14;
    const int Mbits = 10;    // mantissa bits
    const long double two_pow_mbits = ldexpl(1.0L, Mbits); // 2^Mbits

    if (E > Emax) {
        return neg ? -std::numeric_limits<double>::infinity() : std::numeric_limits<double>::infinity();
    }

    if (E >= Emin) {
        long double M = m * 2.0L;
        long double frac = (M - 1.0L) * two_pow_mbits;
        long long mant = llround(frac);
        if (mant == (1LL << Mbits)) {
            mant = 0;
            E += 1;
            if (E > Emax) {
                return neg ? -std::numeric_limits<double>::infinity() : std::numeric_limits<double>::infinity();
            }
        }
        long double recon = ldexpl(1.0L + (long double)mant / two_pow_mbits, E);
        double out = (double)recon;
        if (neg) out = -out;
        return out;
    } else {
        int sub_shift = Emin - Mbits; // -24
        long double unit = ldexpl(1.0L, sub_shift); // 2^{-24}
        long double scaled = ax / unit;
        long long mant = llround(scaled);
        if (mant <= 0) return 0.0;
        if (mant >= (1LL << Mbits)) {
            long double M = m * 2.0L;
            long double frac = (M - 1.0L) * two_pow_mbits;
            long long mant2 = llround(frac);
            if (mant2 == (1LL << Mbits)) {
                mant2 = 0;
                E += 1;
                if (E > Emax) {
                    return neg ? -std::numeric_limits<double>::infinity() : std::numeric_limits<double>::infinity();
                }
            }
            long double recon = ldexpl(1.0L + (long double)mant2 / two_pow_mbits, E);
            double out = (double)recon;
            if (neg) out = -out;
            return out;
        } else {
            long double recon = mant * unit;
            double out = (double)recon;
            if (neg) out = -out;
            return out;
        }
    }
}

inline double quantize_to_fp32(double x) {
    float f = (float)x;
    return (double)f;
}

unique_ptr<Algo> make_all_d(int N) {
    auto A = make_unique<Algo>();
    A->typ = D;
    A->indices.reserve(N);
    for (int i = 1; i <= N; ++i) A->indices.push_back(i);
    return A;
}

unique_ptr<Algo> make_two_level(int N, int inner_size, Prec inner_prec, Prec top_prec = D) {
    auto A = make_unique<Algo>();
    A->typ = top_prec;
    for (int i = 1; i <= N; i += inner_size) {
        int j = min(N, i + inner_size - 1);
        auto sub = make_unique<Algo>();
        sub->typ = inner_prec;
        for (int k = i; k <= j; ++k) sub->indices.push_back(k);
        A->indices.push_back(0);
        A->nested.push_back(move(sub));
    }
    return A;
}

unique_ptr<Algo> make_three_level(int N, int inner_size, int inner_group, Prec inner_prec = H, Prec mid_prec = S, Prec top_prec = D) {
    auto A = make_unique<Algo>();
    A->typ = top_prec;
    vector<unique_ptr<Algo>> inner_blocks;
    for (int i = 1; i <= N; i += inner_size) {
        int j = min(N, i + inner_size - 1);
        auto sub = make_unique<Algo>();
        sub->typ = inner_prec;
        for (int k = i; k <= j; ++k) sub->indices.push_back(k);
        inner_blocks.push_back(move(sub));
    }
    for (size_t g = 0; g < inner_blocks.size(); g += (size_t)inner_group) {
        size_t endg = min(inner_blocks.size(), g + (size_t)inner_group);
        auto mid = make_unique<Algo>();
        mid->typ = mid_prec;
        for (size_t t = g; t < endg; ++t) {
            mid->indices.push_back(0);
            mid->nested.push_back(move(inner_blocks[t]));
        }
        A->indices.push_back(0);
        A->nested.push_back(move(mid));
    }
    return A;
}

long double compute_weight(const Algo* a) {
    long double w = 0.0L;
    int k = (int)a->indices.size();
    if (k > 0) {
        int adds = k - 1;
        int weight_per = (a->typ == H ? 1 : (a->typ == S ? 2 : 4));
        w += (long double)adds * (long double)weight_per;
    }
    int nested_idx = 0;
    for (int slot : a->indices) {
        if (slot == 0) {
            w += compute_weight(a->nested[nested_idx].get());
            nested_idx++;
        }
    }
    return w;
}

double eval_algo(const Algo* a, const vector<double>& inputs) {
    if (a->indices.empty()) return 0.0;
    if (a->typ == D) {
        double acc = 0.0;
        int nested_i = 0;
        for (int slot : a->indices) {
            double val;
            if (slot != 0) val = inputs[slot - 1];
            else {
                val = eval_algo(a->nested[nested_i].get(), inputs);
                nested_i++;
            }
            acc = acc + val;
        }
        return acc;
    } else if (a->typ == S) {
        float acc = 0.0f;
        int nested_i = 0;
        for (int slot : a->indices) {
            double val;
            if (slot != 0) val = inputs[slot - 1];
            else {
                val = eval_algo(a->nested[nested_i].get(), inputs);
                nested_i++;
            }
            float vfl = (float)val;
            acc = acc + vfl;
        }
        return (double)acc;
    } else { // H
        double acc = 0.0;
        int nested_i = 0;
        bool first = true;
        for (int slot : a->indices) {
            double val;
            if (slot != 0) val = inputs[slot - 1];
            else {
                val = eval_algo(a->nested[nested_i].get(), inputs);
                nested_i++;
            }
            double vq = quantize_to_fp16(val);
            if (first) {
                acc = vq;
                first = false;
            } else {
                double sum = acc + vq;
                acc = quantize_to_fp16(sum);
            }
        }
        if (first) return 0.0;
        return acc;
    }
}

void flatten_algo_indices(const Algo* a, vector<int>& out) {
    size_t nested_ptr = 0;
    for (size_t i = 0; i < a->indices.size(); ++i) {
        int slot = a->indices[i];
        if (slot != 0) out.push_back(slot);
        else {
            flatten_algo_indices(a->nested[nested_ptr].get(), out);
            nested_ptr++;
        }
    }
}

long double compute_penalty(const vector<int>& order) {
    long double P = 0.0L;
    int penalty_counter = 0;
    int n = (int)order.size();
    for (int start = 0; start < n; start += 16) {
        int end = min(n, start + 16);
        int first_idx = order[start];
        for (int j = start + 1; j < end; ++j) {
            if (llabs((long long)order[j] - (long long)first_idx) > 15) {
                penalty_counter++;
                P += (long double)penalty_counter / 20000.0L;
            }
        }
    }
    return P;
}

long double compute_C(long double W, long double P, int N) {
    if (N <= 1) return 0.0L;
    return (W + P) / (long double)(N - 1);
}

long double compute_D(long double C) {
    long double denom = sqrt((double)C + 0.5L);
    return 10.0L / denom;
}

long double compute_A(double Sc, double Se) {
    long double num = fabsl((long double)Sc - (long double)Se);
    long double denom = max(fabsl((long double)Se), powl(10.0L, -200.0L));
    long double frac = num / denom;
    long double base = max(frac, powl(10.0L, -20.0L));
    long double A = powl(base, 0.05L);
    return A;
}

void print_algo(const Algo* a, ostream &os) {
    os << '{';
    char c = (a->typ == H ? 'h' : (a->typ == S ? 's' : 'd'));
    os << c << ':';
    size_t nested_ptr = 0;
    for (size_t i = 0; i < a->indices.size(); ++i) {
        if (i) os << ',';
        int slot = a->indices[i];
        if (slot != 0) os << slot;
        else {
            print_algo(a->nested[nested_ptr].get(), os);
            nested_ptr++;
        }
    }
    os << '}';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    vector<double> inputs;
    inputs.reserve(max(0LL, (long long)N));
    for (int i = 0; i < N; ++i) { double x; cin >> x; inputs.push_back(x); }

    long double acc_ld = 0.0L;
    for (int i = 0; i < N; ++i) acc_ld += (long double)inputs[i];
    double Se = (double)acc_ld;

    struct Candidate { unique_ptr<Algo> algo; string tag; };
    vector<Candidate> cands;

    cands.push_back({ make_all_d(N), "all_d" });

    vector<int> two_sizes = {16, 32, 64, 128, 256, 512};
    for (int s : two_sizes) {
        if (s <= 0) continue;
        cands.push_back({ make_two_level(N, s, S, D), "two_s_" + to_string(s) });
        cands.push_back({ make_two_level(N, s, H, D), "two_h_" + to_string(s) });
    }

    vector<int> inner_sizes = {8, 12, 16, 24, 32};
    vector<int> group_sizes = {4, 6, 8, 12};
    for (int in : inner_sizes) {
        for (int gr : group_sizes) {
            if (in <= 0 || gr <= 0) continue;
            cands.push_back({ make_three_level(N, in, gr, H, S, D), "three_h" + to_string(in) + "_g" + to_string(gr) });
        }
    }

    for (int s : vector<int>{64, 128, 256}) {
        cands.push_back({ make_two_level(N, s, S, S), "two_s_s_" + to_string(s) });
        cands.push_back({ make_two_level(N, s, H, S), "two_h_s_" + to_string(s) });
    }

    long double bestScore = -1.0L;
    size_t bestIdx = 0;
    vector<long double> scores(cands.size(), -1.0L);

    for (size_t idx = 0; idx < cands.size(); ++idx) {
        Algo* a = cands[idx].algo.get();

        vector<int> order;
        order.reserve(N);
        flatten_algo_indices(a, order);

        if ((int)order.size() != N) continue;

        long double P = compute_penalty(order);
        long double W = compute_weight(a);
        long double C = compute_C(W, P, N);
        long double D = compute_D(C);

        double Sc = eval_algo(a, inputs);

        long double A = compute_A(Sc, Se);
        long double Score = D / A;

        scores[idx] = Score;
        if (Score > bestScore) { bestScore = Score; bestIdx = idx; }
    }

    if (bestScore < 0) {
        auto fallback = make_all_d(N);
        print_algo(fallback.get(), cout);
        cout << endl;
        return 0;
    }

    print_algo(cands[bestIdx].algo.get(), cout);
    cout << endl;
    return 0;
}
