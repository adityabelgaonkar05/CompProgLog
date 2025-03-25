#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int n, m;
vector<int> adj[100005], path;
bool vis[100005];
int parent[100005];

bool dfs(int u, int p)
{
    vis[u] = 1;
    parent[u] = p;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        if (vis[v])
        {
            path.push_back(v);
            for (int x = u; x != v; x = parent[x])
                path.push_back(x);
            path.push_back(v);
            reverse(path.begin(), path.end());
            return 1;
        }
        if (dfs(v, u))
            return 1;
    }
    return 0;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && dfs(i, -1))
        {
            cout << path.size() << endl;
            for (int x : path)
                cout << x << " ";
            cout << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
