#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

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
        string s;
        cin >> s;
        int count = 0;
        vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m)), c(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];

                if (j == 0)
                {
                    b[i][j] = 0;
                }
                else
                {
                    b[i][j] = a[i][j] + b[i][j - 1];
                }
                if (i == 0)
                {
                    c[i][j] = 0;
                }
                else
                {
                    c[i][j] = a[i][j] + c[i - 1][j];
                }
            }
        }

        int req = 0;

        if (s[0] == 'D')
        {
            req = b[0][m - 1];
        }

        else
        {
            req = c[n - 1][0];
        }
    }

    return 0;
}