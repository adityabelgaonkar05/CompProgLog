#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int te;
    cin >> te;
    while (te--)
    {
        int n, p, l, t;
        cin >> n >> p >> l >> t;

        int ans = n;

        int le = 1, r = n;

        while (le <= r)
        {
            int cur = le + (r - le) / 2;
            int mult = 2;

            int numasig = min((n + 6) / 7, 2 * cur);

            int points = cur * l + (t) * (numasig);

            if (p == points)
            {
                ans = cur;
                break;
            }

            else if (p < points)
            {
                ans = cur;
                r = cur - 1;
            }

            else
            {
                le = cur + 1;
            }
        }

        cout << n - ans << '\n';
    }

    return 0;
}