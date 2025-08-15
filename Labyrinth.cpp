#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

bool check(vector<vector<bool>> &vis, int x, int y, vector<string> &a)
{
    if (x >= 0 && x < (int)vis.size() && y >= 0 && y < (int)vis[0].size() && !vis[x][y] && (a[x][y] == '.' || a[x][y] == 'B'))
        return 1;
    return 0;
}

bool bfs(vector<string> &a, string &ans, int i, int j)
{
    vector<vector<bool>> vis(a.size(), vector<bool>(a[0].size()));
    vector<vector<char>> direction(a.size(), vector<char>(a[0].size()));

    vis[i][j] = 1;

    queue<pair<int, int>> q;
    q.push({i, j});

    while (q.size())
    {
        pair<int, int> el = q.front();
        q.pop();

        int x = el.first;
        int y = el.second;

        if (a[x][y] == 'B')
        {
            while (a[x][y] != 'A')
            {
                char c = direction[x][y];
                ans.push_back(c);
                if (c == 'R')
                    y--;
                else if (c == 'L')
                    y++;
                else if (c == 'U')
                    x++;
                else
                    x--;
            }

            // for (auto o : direction)
            // {
            //     for (auto p : o)
            //         cout << p << ' ';
            //     cout << '\n';
            // }

            reverse(ans.begin(), ans.end());
            return 1;
        }

        if (check(vis, x - 1, y, a))
        {
            q.push({x - 1, y});
            vis[x - 1][y] = 1;
            direction[x - 1][y] = 'U';
        }
        if (check(vis, x + 1, y, a))
        {
            q.push({x + 1, y});
            vis[x + 1][y] = 1;
            direction[x + 1][y] = 'D';
        }
        if (check(vis, x, y - 1, a))
        {
            q.push({x, y - 1});
            vis[x][y - 1] = 1;
            direction[x][y - 1] = 'L';
        }
        if (check(vis, x, y + 1, a))
        {
            q.push({x, y + 1});
            vis[x][y + 1] = 1;
            direction[x][y + 1] = 'R';
        }
    }

    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> a(n);

    for (auto &i : a)
        cin >> i;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == 'A')
            {
                string ans = "";
                bool res = bfs(a, ans, i, j);

                if (res)
                {
                    cout << "YES\n"
                         << ans.size() << '\n'
                         << ans;
                }
                else
                    cout << "NO\n";

                break;
            }
        }
    }

    return 0;
}