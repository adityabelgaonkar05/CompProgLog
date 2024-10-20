#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

const int MOD = 1000000007;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = (n * (n - 1) % MOD * (n + 1) % MOD * 333333336 % MOD + n * (n + 1) % MOD * (2 * n + 1) % MOD * 166666668 % MOD);
        cout << (2022 * ans) % 1000000007 << '\n';
    }

    return 0;
}