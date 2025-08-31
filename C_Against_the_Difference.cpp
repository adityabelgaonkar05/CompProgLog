#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<int> dp(n + 1);

        map<int, int> mp;

        if (a[0] == 1)
        {
            dp[1] = 1;
        }
        else
            mp[a[0]]++;

        for (int i = 1; i < n; ++i)
        {
            mp[a[i]]++;
            if (mp[a[i]] == a[i])
            {
                dp[i + 1] = max(dp[i - 1] + a[i], dp[i]);
                mp[a[i]] = 0;
            }
            else
                dp[i + 1] = dp[i];
        }

        cout << dp[n] << '\n';
    }

    return 0;
}