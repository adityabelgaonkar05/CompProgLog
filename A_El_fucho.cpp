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
        int n;
        cin >> n;
        int m = 0;

        int ans = 0;

        while (n != 1 || m != 1)
        {
            m += n / 2;
            ans += n / 2;
            n = (n + 1) / 2;

            ans += m / 2;
            m = (m + 1) / 2;

            // cout << n << ' ' << m << '\n';
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}