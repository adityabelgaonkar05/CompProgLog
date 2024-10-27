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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(n));
        for (auto &i : a)
            for (auto &j : i)
                cin >> j;

        int changes = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i * n + j + 1 > n * n / 2)
                    break;

                if (a[i][j] != a[n - i - 1][n - j - 1])
                {
                    changes++;
                    a[i][j] == a[n - i - 1][n - j - 1];
                }
            }
        }

        if (changes > k)
            cout << "NO\n";
        else if (changes == k)
            cout << "YES\n";
        else
        {
            if (n & 1)
                cout << "YES\n";
            else if ((k - changes) & 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}