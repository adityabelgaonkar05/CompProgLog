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
        int n, q;
        cin >> n >> q;
        vector<int> color(n + 1);

        for (int i = 1; i <= n; ++i)
        {
            cin >> color[i];
        }

        vector<vector<pair<int, int>>> adj(n + 1);
        vector<vector<int>> ed;

        for (int i = 0; i < n - 1; ++i)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
            ed.push_back({a, b, c});
        }

        int total = 0;

        for (auto i : ed)
        {
            if (color[i[0]] != color[i[1]])
            {
                total += i[2];
            }
        }

        while (q--)
        {
            int a, b;
            cin >> a >> b;

            for (auto i : adj[a])
            {
                int h = i.first;
                int hh = i.second;

                if (color[h] != color[a])
                    total -= hh;

                if (color[h] != b)
                    total += hh;
            }

            color[a] = b;

            cout << total << '\n';
        }
    }

    return 0;
}