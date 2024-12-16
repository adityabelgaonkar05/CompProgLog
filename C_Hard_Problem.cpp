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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        int left = m;
        int right = m;
        left -= (min(left, a));
        right -= (min(right, b));
        if (c > left)
        {
            c -= left;
            left = 0;
            right -= (min(right, c));
        }

        else
        {
            left -= c;
        }

        cout << 2 * m - (left + right) << '\n';
    }

    return 0;
}