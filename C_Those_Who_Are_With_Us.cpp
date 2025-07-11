#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)); // yippeeeeeeeeee
        int maxval = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                maxval = max(maxval, a[i][j]);
            }

        int tcnt = 0;
        vector<int> rowcnt(n), colcnt(m);

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (a[i][j] == maxval)
                {
                    tcnt++;
                    rowcnt[i]++;
                    colcnt[j]++;
                }

        bool found = 1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int overlap = 0;
                if (a[i][j] == maxval)
                    overlap = 1;
                if (rowcnt[i] + colcnt[j] - overlap == tcnt)
                {
                    found = 0;
                    // cout << maxval << '\n';
                }
            }
        }

        if (!found)
            cout << maxval - 1 << '\n';
        else
            cout << maxval << '\n';
    }

    return 0;
}
