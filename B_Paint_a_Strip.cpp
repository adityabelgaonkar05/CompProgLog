#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    // vector<int> dp(100010, 0);
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        // if (dp[n])
        //     cout << dp[n] << '\n';
        // else
        // {
        for (int i = 2; i <= n; i = i * 2 + 1)
        {
            ans++;
        }
        // dp[n] = ans;
        cout << ans << '\n';
        // }
    }

    return 0;
    *
}