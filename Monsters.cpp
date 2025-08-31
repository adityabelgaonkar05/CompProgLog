#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

int currtime = 1;

bool validate(int a, int b, int n, int m, vector<vector<int>> &vis, vector<string> &grid)
{
    if (a >= 0 && a < n && b >= 0 && b < m && vis[a][b] >= currtime && grid[a][b] == '.')
        return 1;
    return 0;
}

bool validate(int a, int b, int n, int m, vector<vector<int>> &safe, vector<vector<int>> &vis, int ze)
{
    if (a >= 0 && a < n && b >= 0 && b < m && safe[a][b] == 0 && vis[a][b] < currtime + 3 && vis[a][b] != -1)
        return 1;
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    queue<vector<int>> q;

    vector<string> grid(n);

    vector<vector<int>> vis(n, vector<int>(m, INT_MAX));
    vector<vector<int>> safe(n, vector<int>(m, 0));

    pair<int, int> posa({0, 0});

    for (auto &i : grid)
        cin >> i;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == 'M')
            {
                q.push({i, j, 1});
                vis[i][j] = 0;
            }
            else if (grid[i][j] == 'A')
            {
                q.push({i, j, 0});
                vis[i][j] = 0;
                posa = {i, j};
            }
            else if (grid[i][j] == '#')
                safe[i][j] = 2;
        }
    }
    queue<vector<int>> next;

    while (q.size())
    {
        while (q.size())
        {
            auto it = q.front();
            q.pop();

            safe[it[0]][it[1]] |= it[2];

            if (validate(it[0] + 1, it[1], n, m, vis, grid))
            {
                next.push({it[0] + 1, it[1], it[2]});
                vis[it[0] + 1][it[1]] = currtime;
                if (it[2])
                    vis[it[0] + 1][it[1]] = -1;
            }
            if (validate(it[0] - 1, it[1], n, m, vis, grid))
            {
                next.push({it[0] - 1, it[1], it[2]});
                vis[it[0] - 1][it[1]] = currtime;
                if (it[2])
                    vis[it[0] - 1][it[1]] = -1;
            }
            if (validate(it[0], it[1] + 1, n, m, vis, grid))
            {
                next.push({it[0], it[1] + 1, it[2]});
                vis[it[0]][it[1] + 1] = currtime;
                if (it[2])
                    vis[it[0]][it[1] + 1] = -1;
            }
            if (validate(it[0], it[1] - 1, n, m, vis, grid))
            {
                next.push({it[0], it[1] - 1, it[2]});
                vis[it[0]][it[1] - 1] = currtime;
                if (it[2])
                    vis[it[0]][it[1] - 1] = -1;
            }
        }

        currtime++;

        while (next.size())
        {
            auto it = next.front();
            next.pop();

            safe[it[0]][it[1]] |= it[2];

            if (validate(it[0] + 1, it[1], n, m, vis, grid))
            {
                q.push({it[0] + 1, it[1], it[2]});
                vis[it[0] + 1][it[1]] = currtime;
            }
            if (validate(it[0] - 1, it[1], n, m, vis, grid))
            {
                q.push({it[0] - 1, it[1], it[2]});
                vis[it[0] - 1][it[1]] = currtime;
            }
            if (validate(it[0], it[1] + 1, n, m, vis, grid))
            {
                q.push({it[0], it[1] + 1, it[2]});
                vis[it[0]][it[1] + 1] = currtime;
            }
            if (validate(it[0], it[1] - 1, n, m, vis, grid))
            {
                q.push({it[0], it[1] - 1, it[2]});
                vis[it[0]][it[1] - 1] = currtime;
            }
        }

        currtime++;
    }

    queue<vector<int>> qq;
    qq.push({posa.first, posa.second});

    vector<string> dir(n, string(m, 'A'));

    pair<int, int> fin({-1, -1});

    while (!qq.empty())
    {
        int sz = qq.size();
        while (sz--)
        {
            auto it = qq.front();
            qq.pop();

            if (it[0] == n - 1 || it[0] == 0 || it[1] == 0 || it[1] == m - 1)
            {
                fin = {it[0], it[1]};
                break;
            }

            if (validate(it[0] + 1, it[1], n, m, safe, vis, 0))
            {
                qq.push({it[0] + 1, it[1]});
                dir[it[0] + 1][it[1]] = 'U';
                vis[it[0] + 1][it[1]] = currtime + 33;
            }
            if (validate(it[0] - 1, it[1], n, m, safe, vis, 0))
            {
                qq.push({it[0] - 1, it[1]});
                dir[it[0] - 1][it[1]] = 'D';
                vis[it[0] - 1][it[1]] = currtime + 33;
            }
            if (validate(it[0], it[1] + 1, n, m, safe, vis, 0))
            {
                qq.push({it[0], it[1] + 1});
                dir[it[0]][it[1] + 1] = 'L';
                vis[it[0]][it[1] + 1] = currtime + 33;
            }
            if (validate(it[0], it[1] - 1, n, m, safe, vis, 0))
            {
                qq.push({it[0], it[1] - 1});
                dir[it[0]][it[1] - 1] = 'R';
                vis[it[0]][it[1] - 1] = currtime + 33;
            }
        }
        if (fin.first != -1)
            break;
    }

    if (fin.first == -1)
    {
        cout << "NO";
        return 0;
    }

    dir[posa.first][posa.second] = 'A';

    string path = "";
    int x = fin.first, y = fin.second;

    while (dir[x][y] != 'A')
    {
        if (dir[x][y] == 'L')
        {
            path.push_back('R');
            y--;
        }
        else if (dir[x][y] == 'R')
        {
            path.push_back('L');
            y++;
        }
        else if (dir[x][y] == 'U')
        {
            path.push_back('D');
            x--;
        }
        else
        {
            path.push_back('U');
            x++;
        }
    }

    cout << "YES\n";
    cout << path.size() << '\n';

    for (int i = path.size() - 1; i >= 0; --i)
        cout << path[i];

    return 0;
}