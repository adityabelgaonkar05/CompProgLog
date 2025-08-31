#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // bfs simple

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> parent(n + 1);
    parent[1] = 1;

    bool found = 0;

    queue<int> q;
    q.push(1);
    vector<int> vis(n + 1);
    vis[1] = 1;

    while (q.size())
    {
        queue<int> next;

        while (q.size())
        {
            auto it = q.front();
            q.pop();

            for (auto i : adj[it])
            {
                if (!vis[i])
                {
                    vis[i] = 1;
                    parent[i] = it;
                    next.push(i);
                }
            }
        }

        q = next;
    }

    if (parent[n] == 0)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> path;
    path.push_back(n);

    while (path.back() != parent[path.back()])
    {
        path.push_back(parent[path.back()]);
    }

    reverse(path.begin(), path.end());

    cout << path.size() << '\n';

    for (auto it : path)
        cout << it << ' ';

    return 0;
}