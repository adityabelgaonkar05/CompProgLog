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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        for (int i = 0; i < m; ++i)
        {
            int x, y;
            cin >> x >> y;
            // if (a[0] > (a[0] - y))
            //     a[0] -= y;
            for (int i = 0; i < n; ++i)
            {
                if (a[i] > (a[i] - y))
                {
                    a[i] -= y;
                    break;
                }
            }
        }

        sort(a.begin(), a.end());

        for (int i = 1; i < n; ++i)
        {
            a[i] += a[i - 1];
        }

        for (int i : a)
            cout << i << ' ';
        cout << '\n';
    }

    // if (INT64_MIN < (INT64_MIN - 10))
    //     cout << "YES";

    return 0;
}