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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(k + 1), b(k + 1);
        vector<int> c;

        for (int i = 1; i <= k; ++i)
            cin >> a[i];
        for (int i = 1; i <= k; ++i)
            cin >> b[i];

        c = b;

        // for (int i = 1; i <= k; ++i)
        // {
        //     b[i] += b[i - 1];
        // }

        while (q--)
        {
            int pp;
            cin >> pp;
            int it = lower_bound(a.begin(), a.end(), pp) - a.begin();
            if (pp != a[it])
                it--;
            int ans = b[it];

            if (pp > a[it])
            {
                int time = (pp - a[it]) * (c[it + 1] - c[it]) / (a[it + 1] - a[it]);
                // int timetaken = pp * c[it + 1] / a[it + 1];
                // cout << "hi " << a[it + 1] << ' ' << c[it + 1] << ' ';
                ans += time;
            }

            cout << ans << ' ';
        }

        cout << '\n';
    }

    return 0;
}