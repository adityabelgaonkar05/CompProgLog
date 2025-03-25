#include <bits/stdc++.h>
using namespace std;

long long solve(long long N)
{
    long long used = 0;
    long long toremove = 1;
    long long leftover = N + 1;
    while (leftover >= toremove)
    {
        leftover -= toremove;
        used++;
        toremove++;
    }

    return N - used + 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        long long N;
        cin >> N;

        long long out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}
