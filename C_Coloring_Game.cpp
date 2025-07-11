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
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        int maxi = a[n - 1];
        int maxj = a[n - 2];

        int ans = 0;

        for (int i = 2; i < n; ++i)
        {
            int t1 = 2 * a[i];
            int t2;
            if (i == n - 1)
                t2 = maxj;
            else
                t2 = maxi;

            int x = t1 - a[i];
            int y = t2 - a[i];

            int g = max(x, y);

            int l = 0, r = i - 1;
            while (l < r)
            {
                if (a[l] + a[r] > g)
                {
                    ans += (r - l);
                    --r;

                    // cout << ans << ' ';
                }
                else
                {
                    ++l;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}