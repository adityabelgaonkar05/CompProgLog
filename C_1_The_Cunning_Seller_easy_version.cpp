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
        int n, k;
        cin >> n >> k;
        int cost = 0;
        int deals = 0;

        while (n)
        {
            deal++;
            int tt = 0;
            while (pow(3, tt + 1) <= n)
            {
                tt++;
            }

            cost += pow(3, tt + 1) + tt * pow(3, tt - 1);
            n -= pow(3, tt);
        }

        if (deal <= k)
            cout << cost << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}