#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        // -1 3 -1 3 -1 1

        if (n == 2)
            cout << "-1 2\n";
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (i & 1)
                {
                    if (i != n - 1)
                        cout << 3 << ' ';
                    else
                        cout << 2 << ' ';
                }
                else
                    cout << -1 << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}