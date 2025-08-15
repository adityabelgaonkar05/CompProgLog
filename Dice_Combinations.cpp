#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(n + 1);

    dp[0] = 1;

    for (int i = 1; i <= min(n, 6ll); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            dp[i] += dp[j];
        }
    }

    for (int i = 7; i <= n; ++i)
    {
        for (int j = i - 6; j < i; ++j)
        {
            dp[i] += dp[j];

            dp[i] %= 1000000007;
        }
    }

    cout << dp[n];

    return 0;
}