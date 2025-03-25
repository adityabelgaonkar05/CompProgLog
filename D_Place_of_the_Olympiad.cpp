#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int maxs(int lp, int m)
{
    int low = 0, h = m;
    while (low < h)
    {
        int mid = (low + h + 1) / 2;
        if (mid + (mid - 1) / lp <= m)
        {
            low = mid;
        }
        else
        {
            h = mid - 1;
        }
    }
    return low;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int ans = m, l = 1, r = m;

        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (n * maxs(mid, m) >= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
