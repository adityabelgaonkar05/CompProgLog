#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

template <typename T>
T inverse(T a, T m)
{
    T u = 0, v = 1;
    while (a != 0)
    {
        T t = m / a;
        m -= t * a;
        swap(a, m);
        u -= t * v;
        swap(u, v);
    }
    assert(m == 1);
    return u;
}

template <typename T>
class Modular
{
public:
    using Type = typename decay<decltype(T::value)>::type;

    constexpr Modular() : value() {}
    template <typename U>
    Modular(const U &x) { value = normalize(x); }

    template <typename U>
    static Type normalize(const U &x)
    {
        Type v;
        if (-mod() <= x && x < mod())
            v = static_cast<Type>(x);
        else
            v = static_cast<Type>(x % mod());
        if (v < 0)
            v += mod();
        return v;
    }

    const Type &operator()() const { return value; }
    template <typename U>
    explicit operator U() const { return static_cast<U>(value); }
    constexpr static Type mod() { return T::value; }

    Modular &operator+=(const Modular &other)
    {
        if ((value += other.value) >= mod())
            value -= mod();
        return *this;
    }
    Modular &operator-=(const Modular &other)
    {
        if ((value -= other.value) < 0)
            value += mod();
        return *this;
    }
    Modular &operator*=(const Modular &other)
    {
        value = normalize(static_cast<int64_t>(value) * other.value);
        return *this;
    }
    Modular &operator/=(const Modular &other) { return *this *= Modular(inverse(other.value, mod())); }

    friend Modular operator+(Modular lhs, const Modular &rhs) { return lhs += rhs; }
    friend Modular operator-(Modular lhs, const Modular &rhs) { return lhs -= rhs; }
    friend Modular operator*(Modular lhs, const Modular &rhs) { return lhs *= rhs; }
    friend Modular operator/(Modular lhs, const Modular &rhs) { return lhs /= rhs; }

    friend bool operator==(const Modular &lhs, const Modular &rhs) { return lhs.value == rhs.value; }
    friend bool operator!=(const Modular &lhs, const Modular &rhs) { return !(lhs == rhs); }
    friend ostream &operator<<(ostream &os, const Modular &x) { return os << x.value; }
    friend istream &operator>>(istream &is, Modular &x)
    {
        typename common_type<int64_t, Type>::type val;
        is >> val;
        x = Modular(val);
        return is;
    }

private:
    Type value;
};

struct Mod
{
    static const int value = 1000000007;
};
using Mint = Modular<Mod>;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    cout << n << m;

    Mint ans;
    Mint a = 5, b = 18;
    ans = a / b;
    cout << ans << '\n';

    return 0;
}