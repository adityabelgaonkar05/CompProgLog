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
        int x, y;
        cin >> y >> x;

        if (y > x)
        {
            if (y & 1)
            {
                cout << (y - 1) * (y - 1) + x << '\n';
            }

            else
            {
                cout << (y * y) - x + 1 << '\n';
            }
        }

        else
        {
            if (x & 1)
            {
                cout << (x * x) - y + 1 << '\n';
            }

            else
            {
                cout << (x - 1) * (x - 1) + y << '\n';
            }
        }
    }

    return 0;
}