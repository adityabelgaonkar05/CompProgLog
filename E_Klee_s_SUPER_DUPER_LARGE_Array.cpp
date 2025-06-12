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

        int l = k, r = n + k - 1;
        int rr = r;
        int ans = INT_MAX;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int left = (mid * (mid + 1) / 2) - ((k - 1) * (k) / 2);
            int right = (rr * (rr + 1) / 2) - (mid * (mid + 1) / 2);

            if (left == right)
            {
                ans = 0;
                break;
            }

            ans = min(abs(left - right), ans);

            if (left < right)
            {
                l = mid + 1;
            }

            else
            {
                r = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}