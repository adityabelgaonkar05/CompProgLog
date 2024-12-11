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
        int n, k;
        cin >> n >> k;

        int l = k, r = k + n - 1;
        int rhs = r;
        int ans = INT64_MAX;

        while (l < r)
        {
            int mid = l + (r - l) / 2;
            int suml = (mid * (mid + 1) / 2);
            int sumr = (rhs * (rhs + 1) / 2);
            sumr -= suml;
            suml -= (k * (k - 1) / 2);

            // cout << mid << ' ' << suml << ' ' << sumr << '\n';

            ans = min(abs(suml - sumr), ans);
            if (suml == sumr)
                break;
            else if (suml < sumr)
                l = mid + 1;
            else
                r = mid;
        }

        cout << ans << '\n';
    }

    return 0;
}