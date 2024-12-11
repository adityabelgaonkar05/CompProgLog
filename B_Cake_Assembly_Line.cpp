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
        int n, w, h;
        cin >> n >> w >> h;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int minleft = 0, minright = 0;

        for (int i = 0; i < n; ++i)
        {
            minleft = max(minleft, a[i] + h - w - b[i]);
            minright = max(minright, b[i] - w + h - a[i]);
        }

        bool minleftpos = 1;
        bool minrightpos = 1;

        for (int i = 0; i < n; ++i)
        {
            if (!((a[i] - minleft - w <= b[i] - h) && (a[i] - minleft + w >= b[i] + h)))
            {
                minleftpos = 0;
            }

            if (!((a[i] + minright - w <= b[i] - h) && (a[i] + minright + w >= b[i] + h)))
            {
                minrightpos = 0;
            }

            if (!minrightpos && !minleftpos)
                break;
        }

        if (minleftpos || minrightpos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}