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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n + 1);

        for (int i = 0; i < m; ++i)
        {
            int e, b;
            cin >> e >> b;
            a[e].push_back(b);
            a[b].push_back(e);
        }

        set<int> s;
        map<int, int> mp;

        for (int i = 1; i <= n; ++i)
        {
            mp[a[i].size()]++;
            s.insert(a[i].size());
        }

        if (s.size() == 3)
        {
            int el;

            for (auto i : s)
                if (mp[i] == 1)
                    el = i;

            s.erase(el);

            cout << el << ' ' << *s.rbegin() - 1 << '\n';
        }
        else
        {
            cout << *s.rbegin() << ' ' << *s.rbegin() - 1 << '\n';
        }
    }

    return 0;
}