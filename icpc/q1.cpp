#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        a[0] = 0;

        for (int i = 1; i <= n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());
        for (int i = 1; i <= n; ++i)
        {
            a[i] += a[i - 1];
        }

        vector<int> dp(n + 5 + k, 0);

        for (int i = 1; i <= n; ++i)
        {
            if (i <= k)
            {
                dp[i] = a[i] - a[i - 1];
                cout << a[i] << ' ';
            }

            else
            {
                dp[i] = a[i] - a[i - 1];
                dp[i] += dp[i - k - 1];
                cout << a[i] - dp[i - k] << ' ';
            }
        }

        // cout << '\n';
        // for (int i : dp)
        //     cout << i << ' ';
        // cout << '\n';
        cout << '\n';
    }

    return 0;
}
