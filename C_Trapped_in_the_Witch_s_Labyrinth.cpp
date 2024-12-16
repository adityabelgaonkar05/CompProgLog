#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void recursivetraversal(vector<vector<int>> &bad, vector<string> &a, int &n, int &m, int curi, int curj)
{
    if (bad[curi][curj])
        return;
    bad[curi][curj] = 1;
    if (curi > 0 && (a[curi - 1][curj] == 'D'))
        recursivetraversal(bad, a, n, m, curi - 1, curj);

    if (curi < n - 1 && (a[curi + 1][curj] == 'U'))
        recursivetraversal(bad, a, n, m, curi + 1, curj);

    if (curj > 0 && (a[curi][curj - 1] == 'R'))
        recursivetraversal(bad, a, n, m, curi, curj - 1);

    if (curj < m - 1 && (a[curi][curj + 1] == 'L'))
        recursivetraversal(bad, a, n, m, curi, curj + 1);

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (auto &i : a)
            cin >> i;
        vector<vector<int>> bad(n, vector<int>(m, 0));

        for (int i = 0; i < m; ++i)
        {
            if (i == 0)
            {
                if (a[0][i] == 'D' || a[0][i] == 'R' || a[0][i] == '?')
                    continue;
            }

            else if (i == m - 1)
            {
                if (a[0][i] == 'D' || a[0][i] == 'L' || a[0][i] == '?')
                    continue;
            }

            else if (a[0][i] != 'U')
                continue;

            recursivetraversal(bad, a, n, m, 0, i);
        }

        for (int i = 0; i < m; ++i)
        {
            if (i == 0)
            {
                if (a[n - 1][i] == 'U' || a[n - 1][i] == 'R' || a[n - 1][i] == '?')
                    continue;
            }

            else if (i == m - 1)
            {
                if (a[n - 1][i] == 'U' || a[n - 1][i] == 'L' || a[n - 1][i] == '?')
                    continue;
            }

            else if (a[n - 1][i] != 'D')
                continue;

            recursivetraversal(bad, a, n, m, n - 1, i);
        }

        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                if (a[i][0] == 'D' || a[i][0] == 'R' || a[i][0] == '?')
                    continue;
            }

            else if (i == n - 1)
            {
                if (a[i][0] == 'U' || a[i][0] == 'R' || a[i][0] == '?')
                    continue;
            }
            if (a[i][0] != 'L')
                continue;

            recursivetraversal(bad, a, n, m, i, 0);
        }

        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                if (a[i][m - 1] == 'U' || a[i][m - 1] == 'L' || a[i][m - 1] == '?')
                    continue;
            }

            else if (i == n - 1)
            {
                if (a[i][m - 1] == 'D' || a[i][m - 1] == 'L' || a[i][m - 1] == '?')
                    continue;
            }

            if (a[i][m - 1] != 'R')
                continue;

            recursivetraversal(bad, a, n, m, i, m - 1);
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] == '?')
                {
                    if (i > 0 && (bad[i - 1][j] == 0))
                        continue;
                    else if (i < n - 1 && (bad[i + 1][j] == 0))
                        continue;
                    else if (j > 0 && (bad[i][j - 1] == 0))
                        continue;
                    else if (j < m - 1 && (bad[i][j + 1] == 0))
                        continue;
                    else
                        bad[i][j] = 1;
                }
            }
        }

        int ans = 0;

        for (auto i : bad)
            for (auto j : i)
                if (!(j))
                    ans++;

        cout << ans << '\n';
    }

    return 0;
}