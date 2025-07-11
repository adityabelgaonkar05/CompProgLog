#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

void bfs(vector<string> &s, vector<vector<bool>> &vis, int i, int j, int n, int m, string &ans, string ss)
{
    vis[i][j] = 1;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> s(n);

    for (auto &i : s)
        cin >> i;

    string ans = "";

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (s[i][j] == 'A')
            {
                vector<vector<bool>> vis(n, vector<bool>(m, 0));
                dfs(s, vis, i, j, n, m, ans, "");
                break;
            }
        }
    }

    if (ans.size())
        cout << "YES\n"
             << ans.size() << '\n'
             << ans << '\n';
    else
        cout << "NO\n";

    return 0;
}