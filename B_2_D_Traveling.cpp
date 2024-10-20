#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

struct pnt
{
    int x, y;
};

int calc(pnt a, pnt b)
{
    return abs(a.x - b.x) + abs(a.y - b.y) * 1ll;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k, a, b;
        cin >> k >> a >> b;
        vector<pnt> v(n);
        vector<pnt> kel(k);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].x >> v[i].y;
            if (i < k)
                kel[i] = v[i];
        }

        if (a <= k)
        {
            if (b <= k)
                cout << 0 << '\n';
            else
            {
                int mindiff = INT64_MAX;

                for (int i = 0; i < k; ++i)
                {
                    mindiff = min(mindiff, calc(v[i], v[b - 1]));
                }

                cout << mindiff << '\n';
            }
        }

        else
        {
            int mindiff = (long)INT_MAX;
            int mindiff2 = (long)INT_MAX;
            mindiff += 454334LL;
            mindiff2 += 234433LL;

            for (int i = 0; i < k; ++i)
            {

                if (mindiff > calc(v[i], v[a - 1]))
                {
                    mindiff = calc(v[i], v[a - 1]);
                }

                if (mindiff2 > calc(v[i], v[b - 1]))
                {
                    mindiff2 = calc(v[i], v[b - 1]);
                }
            }

            if ((mindiff2 + mindiff) < calc(v[a - 1], v[b - 1]))
            {
                cout << mindiff2 + mindiff << '\n';
            }

            else
            {
                cout << calc(v[a - 1], v[b - 1]) << '\n';
            }
        }
    }

    return 0;
}