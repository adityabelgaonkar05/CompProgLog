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
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        // whichever causes least drop use that till the temperature isnt high enough for it

        int mintemp, minrem, maxtemp, maxrem;

        if (x < y)
        {
            minrem = x;
            maxrem = y;
            mintemp = a;
            maxtemp = b;
        }
        else if (y == x)
        {
            minrem = x;
            mintemp = min(a, b);
            maxrem = x;
            maxtemp = max(a, b);
        }
        else
        {
            minrem = y;
            maxtemp = a;
            maxrem = x;
            mintemp = b;
        }

        int ans = max(0ll, (k - mintemp + 1 + (minrem - 1))) / minrem;
        k -= (minrem * ans);

        // cout << k << ' ';

        int newans = max(0ll, (k - maxtemp + 1 + (maxrem - 1))) / maxrem;
        ans += newans;
        k -= (maxrem * newans);

        // cout << k << ' ' << newans << ' ';

        cout << ans << '\n';
    }

    return 0;
}