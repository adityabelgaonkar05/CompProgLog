#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l, r;
        cin >> n >> k >> l >> r;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int le = 0;

        int ans = 0;

        map<int, int> mp;
        set<int> s;

        for (int i = 0; i < n; ++i)
        {
            mp[a[i]]++;
            s.insert(a[i]);

            if (i - le + 1 < l)
            {
                // cout << a[i] << ' ';

                continue;
            }

            if (i - le + 1 > r)
            {
                mp[a[le]]--;

                if (mp[a[le]] == 0)
                {
                    s.erase(a[le]);
                }
                // cout << a[i] << ' ';

                le++;
            }

            while (s.size() > k)
            {
                mp[a[le]]--;

                if (mp[a[le]] == 0)
                {
                    s.erase(a[le]);
                }

                le++;
            }

            while (s.size() == k && (i - le + 1) >= l && (i - le + 1) <= r)
            {
                // cout << a[i] << ' ';
                ans++;

                if (mp[a[le]] == 1)
                    break;

                mp[a[le]]--;

                if (mp[a[le]] == 0)
                {
                    s.erase(a[le]);
                }

                le++;
            }
        }

        cout << ans << '\n';
        // cout << '\n';
    }

    return 0;
}