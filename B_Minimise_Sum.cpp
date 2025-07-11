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

        int ans = 0;

        int mind = a[0];

        vector<int> mins;

        for (int i = 0; i < n; ++i)
        {
            mind = min(mind, a[i]);
            ans += mind;
            mins.push_back(ans);
        }

        if (n > 2)
        {
            a[1] += a[2];
            a[2] = 0;
        }

        int mind2 = a[0];
        int minsofar = a[0];

        for (int i = 1; i < n - 1; ++i)
        {
            int ai = a[i] + a[i + 1];
            int currsum = mins[i - 1];
            currsum += min(mins[i] - mins[i - 1], ai);
            ans = min(ans, currsum);
        }

        cout << ans << '\n';
    }

    return 0;
}