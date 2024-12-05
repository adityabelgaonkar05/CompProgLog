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
        int x, m;
        cin >> x >> m;

        int ans = 0;

        for (int y = 1; y <= min(2 * x, m); ++y)
        {
            if (y != x)
            {
                int h = y ^ x;
                if (!(y % h) || !(x % h))
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}