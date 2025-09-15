#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

int contrib(vector<int> &a)
{
    sort(a.begin(), a.end());

    int res = 0, pref = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        res += (a[i] * i - pref);
        pref += a[i];
    }
    return res;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int sum = 0;
    vector<vector<int>> a(n, vector<int>(m));

    for (auto &i : a)
        for (auto &j : i)
            cin >> j;

    vector<vector<int>> row(100001);
    vector<vector<int>> col(100001);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            row[a[i][j]].push_back(i);
            col[a[i][j]].push_back(j);
        }
    }

    for (int i = 1; i <= 100000; ++i)
    {
        sum += contrib(row[i]);
        sum += contrib(col[i]);
    }

    cout << sum << '\n';

    return 0;
}