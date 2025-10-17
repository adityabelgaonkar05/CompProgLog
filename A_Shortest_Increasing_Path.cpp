#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (y == 1)
        {
            cout << -1 << '\n';
        }

        else if ((x > y + 1))
        {
            cout << 3 << '\n';
        }
        else if ((x < y))
        {
            cout << 2 << '\n';
        }
        else
            cout << "-1\n";
    }

    return 0;
}