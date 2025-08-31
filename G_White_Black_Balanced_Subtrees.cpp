#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int ans = 0;

pair<int, int> dfs(int ind, vector<vector<int>> &adj, string &s)
{
    int black = 0;
    int white = 0;

    if (s[ind - 1] == 'W')
        white++;
    else
        black++;

    for (auto i : adj[ind])
    {
        pair<int, int> tt = dfs(i, adj, s);
        black += tt.first;
        white += tt.second;
    }

    if (black == white)
        ans++;

    return {black, white};
}

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
        ans = 0;
        vector<int> parent(n - 1);

        for (auto &i : parent)
            cin >> i;

        string s;
        cin >> s;

        vector<vector<int>> adj(n + 1);

        for (int i = 0; i < n - 1; ++i)
        {
            adj[parent[i]].push_back(i + 2);
        }

        dfs(1ll, adj, s);

        cout << ans << '\n';
    }

    return 0;
}