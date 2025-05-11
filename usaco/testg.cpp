#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void dfs(set<int> &s, vector<vector<int>> &a, int ans, int n, int m, int currn, int currm)
{
    if (currn == n - 1 && currm == m - 1)
    {
        s.insert(ans);
        return;
    }

    if (currn < n - 1)
    {
        dfs(s, a, ans + a[currn][currm], n, m, currn + 1, currm);
    }

    if (currm < m - 1)
    {
        dfs(s, a, ans + a[currn][currm], n, m, currn, currm + 1);
    }

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (auto &i : a)
        for (auto &j : i)
            cin >> j;

    int ans = 0;
    set<int> s;

    dfs(s, a, 0, n, m, 0, 0);

    for (int i : s)
        ans += i;

    cout << s.size() << '\n'
         << ans;

    return 0;
}