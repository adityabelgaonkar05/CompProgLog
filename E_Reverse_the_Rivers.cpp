#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;
    map<int, int> mp;

    vector<vector<int>>
        a(n, vector<int>(k));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < k; ++j)
            cin >> a[i][j];

    vector<vector<int>> b(n, vector<int>(k));
    for (int j = 0; j < k; ++j)
    {
        b[0][j] = a[0][j];
        for (int i = 1; i < n; ++i)
        {
            b[i][j] = b[i - 1][j] | a[i][j];
        }
    }

    while (q--)
    {
        int m;
        cin >> m;
        vector<int> r(m);
        vector<char> op(m);
        vector<int> c(m);

        for (int i = 0; i < m; ++i)
            cin >> r[i] >> op[i] >> c[i];

        int ans = -1;
        for (int i = 0; i < n; ++i)
        {
            bool cond = true;
            for (int j = 0; j < m; ++j)
            {
                if ((op[j] == '<' && !(b[i][r[j] - 1] < c[j])) || (op[j] == '>' && !(b[i][r[j] - 1] > c[j])))
                {
                    cond = false;
                    break;
                }
            }
            if (cond)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
