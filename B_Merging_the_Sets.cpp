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
        vector<vector<int>> a(n);

        for (int i = 0; i < n; ++i)
        {
            int s;
            cin >> s;
            while (s--)
            {
                int el;
                cin >> el;
                a[i].push_back(el);
            }
        }

        int c = 0;

        set<int> b;
        map<int, int> mp;

        for (auto i : a)
            for (auto j : i)
                b.insert(j), mp[j]++;

        if (b.size() == m)
            c++;
        else
        {
            cout << "NO\n";
            continue;
        }

        for (auto i : a)
        {
            for (auto j : i)
                mp[j]--;

            bool cond = 0;

            for (auto j : i)
            {
                if (mp[j] == 0)
                {
                    cond = 1;
                    break;
                }
            }

            if (!cond)
                c++;

            for (auto j : i)
                mp[j]++;
        }

        if (c >= 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}