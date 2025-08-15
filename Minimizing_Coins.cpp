#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int dfs(vector<int> &dp, vector<int> &a, int curr)
{
    if (dp[curr] != INT_MAX)
        return dp[curr];

    int sumco = INT_MAX;
    sumco++;

    for (auto i : a)
    {
        if (i <= curr)
        {
            sumco = min(sumco, dfs(dp, a, curr - i) + 1);
        }
    }

    dp[curr] = sumco;
    return dp[curr];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    sort(a.rbegin(), a.rend());

    vector<int> dp(k + 1, INT_MAX);
    dp[0] = 0;

    dfs(dp, a, k);

    if (dp[k] >= INT_MAX)
        cout << -1 << '\n';
    else
        cout << dp[k] << '\n';

    return 0;
}