#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int rec(vector<string> &s, vector<vector<int>> &dp, int curi, int curj, int &n)
{
    if (curi == n - 1 && curj == n - 1)
        return (s[curi][curj] == '.');

    if (curi > n - 1 || curj > n - 1)
        return 0;

    if (dp[curi][curj] != -1)
        return dp[curi][curj];

    if (s[curi][curj] == '*')
        dp[curi][curj] = 0;
    else
        dp[curi][curj] = (rec(s, dp, curi + 1, curj, n) + rec(s, dp, curi, curj + 1, n)) % 1000000007;

    return dp[curi][curj];
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> s(n);

    for (auto &i : s)
        cin >> i;

    vector<vector<int>> dp(n, vector<int>(n, -1));

    int ans = rec(s, dp, 0, 0, n);
    cout << ans << '\n';

    return 0;
}