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
        vector<vector<int>> adj(n + 1); // pass pls

        int tt = n - 1;

        while (tt--) // gng
        {
            int a, b;
            cin >> a >> b;

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        if (n <= 2)
        {
            cout << 0 << '\n';
            continue;
        }

        // each alternate branch is a new path

        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (adj[i].size() == 1)
                ans++;
        }

        int ans2 = 0;
        for (int i = 1; i <= n; ++i)
        {
            int c = 0;
            for (int j : adj[i])
                if (adj[j].size() == 1)
                    c++;
            ans2 = max(ans2, c);
        }

        cout << (ans - ans2) << '\n';
    }

    return 0;
}