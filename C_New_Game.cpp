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
        set<int> s;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
            s.insert(i);
        }

        vector<pair<int, int>> pp;

        for (auto i : s)
        {
            pp.push_back({mp[i], i});
        }

        int ans = 0;

        // for (auto i : pp)
        // {
        //     cout << i.second << ' ' << i.first << '\n';
        // }

        int l = 0, r = 0;
        int curr = 0;

        while (r < pp.size())
        {
            // cout << l << ' ' << r << ' ';
            curr += pp[r].first;
            ans = max(ans, curr);

            if (r + 1 < pp.size() && (pp[r + 1].second != pp[r].second + 1))
            {
                r++;
                l = r;
                curr = 0;
            }

            else if ((r - l + 1 < k))
            {
                r++;
            }

            else if ((r - l + 1 == k))
            {
                curr -= pp[l++].first;
                r++;
            }

            else
            {
                r++;
                l = r;
                curr = 0;
            }
        }

        // cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}