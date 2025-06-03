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
        // keep track of largest and smallest x and y values;

        int sx = INT_MAX, sy = INT_MAX, lx = 0, ly = 0;

        int n;
        cin >> n;

        vector<pair<int, int>> p;
        vector<int> yv(n), xv(n);

        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            sx = min(sx, x);
            lx = max(lx, x);
            sy = min(sy, y);
            ly = max(ly, y);

            p.push_back({x, y});
            yv[i] = y;
            xv[i] = x;
        }

        if (n == 1)
        {
            cout << 1 << '\n';
            //  << '\n';
            continue;
        }

        sort(xv.begin(), xv.end());
        sort(yv.begin(), yv.end());
        int ans = (lx - sx + 1) * (ly - sy + 1);

        for (auto i : p)
        {
            if (i.first == xv.back() || i.first == xv[0] || i.second == yv.back() || i.second == yv[0])
            {
                int newsx = xv[0];
                int newsy = yv[0];
                int newlx = xv.back();
                int newly = yv.back();

                if (i.first == xv.back())
                {
                    newlx = xv[xv.size() - 2];
                }
                if (i.first == xv[0])
                {
                    newsx = xv[1];
                }
                if (i.second == yv.back())
                {
                    newly = yv[yv.size() - 2];
                }
                if (i.second == yv[0])
                {
                    newsy = yv[1];
                }

                // cout << newsx << ' ' << newlx << ' ' << newsy << ' ' << newly << '\n';
                int newbound = (newlx - newsx + 1) * (newly - newsy + 1);
                if (newbound == n - 1)
                {
                    newbound += min(newlx - newsx + 1, newly - newsy + 1);
                }

                ans = min(ans, newbound);
            }
        }

        cout << ans << '\n';
        //  << '\n';
    }

    return 0;
}