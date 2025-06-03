#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int nCr(int n, int r) // gfg
{
    if (r > n)
        return 0;

    if (r == 0 || n == r)
        return 1;

    double res = 0;

    for (int i = 0; i < r; i++)
    {
        res += log(n - i) - log(i + 1);
    }

    return (int)round(exp(res));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> rolls = {1, 2, 3, 4, 5, 6};
    vector<int> dp(max(7ll, n + 1));
    dp[1] = 1;

    for (int i = 2; i <= 6; ++i)
    {
        int ans = 1;
        for (int j = 1; j < i; ++j)
        {
            ans += dp[i - j];
            ans %= 1000000007;
        }

        dp[i] = ans;
    }

    for (int i = 7; i <= n; ++i)
    {
        int ans = 0;
        for (int j = 1; j < i; ++j)
        {
            ans += dp[i - j];
            ans %= 1000000007;
        }

        dp[i] = ans;
    }

    cout << dp[n] << '\n';

    return 0;
}