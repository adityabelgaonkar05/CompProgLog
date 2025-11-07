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
        int n, m;
        cin >> n >> m;
        int tn = n;

        priority_queue<int> pq;

        while (tn--)
        {
            int el;
            cin >> el;
            pq.push(el);
        }

        vector<int> b(m), c(m);

        for (auto &i : b)
            cin >> i;
        for (auto &i : c)
            cin >> i;

        multiset<pair<int, int>> ms;

        for (int i = 0; i < m; ++i)
        {
            ms.insert({b[i], c[i]});
        }

        int ans = 0;

        // while (pq.size())
        // {
        //     auto it = pq.top();
        //     pq.pop();
        //     cout << it << ' ';
        // }

        while (pq.size() && ms.size())
        {
            auto s = pq.top();
            auto it = ms.upper_bound({s, INT_MAX});
            pq.pop();

            if (it == ms.begin())
            {
                continue;
            }

            it--;

            int h = (*it).first;
            int j = (*it).second;

            // cout << h << ' ' << j << '\n';

            ms.erase(it);
            ans++;

            if (j > 0)
                pq.push(max(j, s));
        }

        cout << ans << '\n';
    }

    return 0;
}