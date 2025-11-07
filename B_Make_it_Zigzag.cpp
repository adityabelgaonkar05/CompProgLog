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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int maxsofar = a[0];

        for (int i = 1; i < n; ++i)
        {
            maxsofar = max(maxsofar, a[i]);
            if (i & 1)
                a[i] = maxsofar;
        }

        // for (auto i : a)
        //     cout << i << ' ';
        // cout << '\n';

        int ans = 0;

        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == a[i - 1])
            {
                ans++;
                a[i - 1]--;

                // cout << "l-";
            }
            if (i < n - 1 && a[i] <= a[i + 1])
            {
                ans += a[i + 1] - a[i] + 1;
                a[i + 1] = a[i] - 1;
                // cout << "p-";
            }
        }

        cout << ans << '\n';
    }

    return 0;
}