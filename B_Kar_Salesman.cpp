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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.rbegin(), a.rend());
        int ans = accumulate(a.begin(), a.end(), 0ll);
        ans = (int)ceil((double)ans / (double)x);
        int alt = *max_element(a.begin(), a.end());
        cout << max(ans, alt) << '\n';

        // for (int i = 0; i < n; i += x)
        // {
        //     int currmax = *max_element(a.begin() + i, min(a.begin() + n, a.begin() + i + x));
        //     ans += currmax;
        //     int deficit = 0;

        //     for (int j = i; j < min(i + x, n); ++j)
        //     {
        //         deficit += (currmax - a[j]);
        //         a[j] = 0;
        //     }

        //     // cout << deficit << ' ';

        //     int temp = i + x - 1;
        //     while (temp < n)
        //     {
        //         if (deficit > a[temp])
        //         {
        //             deficit -= a[temp];
        //             a[temp] = 0;
        //         }

        //         else
        //         {
        //             a[temp] -= deficit;
        //             deficit = 0;
        //             break;
        //         }

        //         temp++;
        //     }

        //     // for (int f : a)
        //     //     cout << f << ' ';
        //     // cout << '\n';
        // }

        // cout << ans << '\n';
    }

    return 0;
}