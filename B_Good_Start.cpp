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
        int w, h, a, b;
        int x1, y1, x2, y2;
        cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;

        int sidedist = max(x1, x2) - min(x1, x2);
        int topdist = max(y1, y2) - min(y1, y2);

        bool cond = 0;

        if (x1 == x2)
        {
            if (!(topdist % b))
                cond = 1;
        }

        else if (y1 == y2)
        {
            if (!(sidedist % a))
                cond = 1;
        }

        else
        {
            if (!(sidedist % a) || !(topdist % b))
            {
                cond = 1;
            }
        }

        cout << (cond ? "Yes\n" : "No\n");
    }

    return 0;
}