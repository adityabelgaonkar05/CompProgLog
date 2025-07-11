#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void dfs(vector<string> &s, vector<vector<bool>> &vis, int i, int j, int n, int m)
{
    vis[i][j] = 1;
    if (i > 0 && !vis[i - 1][j] && s[i - 1][j] == '.')
        dfs(s, vis, i - 1, j, n, m);
    if (i < n - 1 && !vis[i + 1][j] && s[i + 1][j] == '.')
        dfs(s, vis, i + 1, j, n, m);
    if (j > 0 && !vis[i][j - 1] && s[i][j - 1] == '.')
        dfs(s, vis, i, j - 1, n, m);
    if (j < m - 1 && !vis[i][j + 1] && s[i][j + 1] == '.')
        dfs(s, vis, i, j + 1, n, m);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<vector<bool>> vis(n, vector<bool>(m, 0));
    for (auto &i : s)
        cin >> i;
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (s[i][j] == '.' && !vis[i][j])
            {
                ans++;
                dfs(s, vis, i, j, n, m);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}