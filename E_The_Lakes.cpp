#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void recursivetraversal(int &currtotal, set<pair<int, int>> &visited, int curi, int curj, int n, int m, vector<vector<int>> &a)
{
    if (a[curi][curj] == 0)
        return;
    visited.insert({curi, curj});
    currtotal += a[curi][curj];

    // cout << curi << ' ' << curj << '\n';

    if ((visited.find({curi + 1, curj}) == visited.end()) && (curi < n - 1))
        recursivetraversal(currtotal, visited, curi + 1, curj, n, m, a);

    if ((visited.find({curi, curj + 1}) == visited.end()) && (curj < m - 1))
        recursivetraversal(currtotal, visited, curi, curj + 1, n, m, a);

    if ((visited.find({curi - 1, curj}) == visited.end()) && (curi > 0))
        recursivetraversal(currtotal, visited, curi - 1, curj, n, m, a);

    if ((visited.find({curi, curj - 1}) == visited.end()) && (curj > 0))
        recursivetraversal(currtotal, visited, curi, curj - 1, n, m, a);

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
        set<pair<int, int>> visited;
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));

        for (auto &i : a)
            for (auto &j : i)
                cin >> j;

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int currtotal = 0;

                if ((a[i][j] != 0) && (visited.find({i, j}) == visited.end()))
                {
                    recursivetraversal(currtotal, visited, i, j, n, m, a);
                }

                ans = max(ans, currtotal);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}