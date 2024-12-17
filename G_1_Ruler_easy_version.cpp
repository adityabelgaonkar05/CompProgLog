#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;
// this is actually hard version ka code
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l = 2, r = 999;
        int ans = 999;

        while (l < r)
        {
            int f = l + (r - l) / 3;
            int s = l + (r - l) / 3 * 2;

            cout << "? " << f << ' ' << s << endl;

            int y;
            cin >> y;

            if ((f + 1) * (s + 1) == y)
            {
                r = f;
                ans = min(ans, f);
            }

            else if (f * (s + 1) == y)
            {
                l = f + 1;
                r = s;
                ans = min(ans, s);
            }

            else
            {
                l = s + 1;
            }
        }

        cout << "! " << ans << endl;
    }

    return 0;
}