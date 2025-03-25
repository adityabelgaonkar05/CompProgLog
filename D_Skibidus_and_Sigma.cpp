#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define ab adityabelgaonkar

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
        vector<vector<int>> a(n, vector<int>(m));
        for (auto &i : a)
            for (auto &j : i)
                cin >> j;

        vector<pair<int, int>> pp;
        for (int i = 0; i < n; i++)
        {
            int tot = 0, s = 0;
            for (int j = 0; j < m; j++)
            {
                tot += a[i][j];
                s += tot;
            }
            pp.push_back({tot, s});
        }

        sort(pp.begin(), pp.end(), [](auto &p1, auto &p2)
             { return p1.first > p2.first; });

        int curr = 0, ans = 0;
        for (auto p : pp)
        {
            ans += p.second + curr * m;
            curr += p.first;
        }
        cout << ans << "\n";
    }
    return 0;
}
