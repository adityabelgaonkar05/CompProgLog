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
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int orn = n;
        int orm = m;
        int ora = a;
        int orb = b;
        int ans = 1;

        while (n > 1 || m > 1)
        {
            int area1 = b * n;
            int area2 = a * m;
            int area3 = (m - b + 1) * n;
            int area4 = (n - a + 1) * m;

            if (area1 <= area2 && area1 <= area3 && area1 <= area4)
            {
                m = b;
            }
            else if (area2 <= area1 && area2 <= area3 && area2 <= area4)
            {
                n = a;
            }
            else if (area3 <= area1 && area3 <= area2 && area3 <= area4)
            {
                m -= (b - 1);
            }
            else
            {
                n -= (a - 1);
            }

            a = (n + 1) / 2;
            b = (m + 1) / 2;

            ans1++;
        }

        cout << ans << '\n';
    }

    return 0;
}