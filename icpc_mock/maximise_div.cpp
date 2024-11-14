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
        vector<int> a(n);
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (k)
            {
                if (mp[a[i]] - 1 > 0)
                {
                    k--;
                    mp[a[i]] = max(0ll, mp[a[i]] - 1);
                    a[i] = -500;
                }
                ans += (n - i - 1);
            }

            else
            {
                mp[a[i]] = max(0ll, mp[a[i]] - 1);
                ans += (n - i - 1) - mp[a[i]];
            }
        }

        // for (auto i : a)
        //     cout << i << ' ';
        // cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}