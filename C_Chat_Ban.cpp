#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;

        int l = 0, r = 2 * k - 1;
        int ans = 1;
        int kk = k - 1;

        x = min(x, kk * (kk + 1) / 2 + k * (k + 1) / 2);

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int sum = 0;
            int first = min(k, mid) * (min(k, mid) + 1) / 2;
            int second = 0;
            int left = 0;

            if (mid > k)
            {
                left = min(kk, mid - k);
                left = kk - left;
                second += kk * (kk + 1) / 2 - left * (left + 1) / 2;
            }

            // int leftover = k - min(k, max(0ll, mid - k)) - 1;
            // int second = k * (k - 1) / 2 - leftover * (leftover + 1) / 2;

            sum = first + second;
            // cout << sum << ' ' << mid << ' ' << left << '\n';

            if (sum > x)
            {
                r = mid - 1;
                ans = mid;
            }
            else if (sum == x)
            {
                ans = mid;
                break;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}