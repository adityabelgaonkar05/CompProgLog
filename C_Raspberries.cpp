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
        int k;
        cin >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ans = INT_MAX;

        int mult = 0;

        for (auto i : a)
        {
            if (i % k == 0)
                mult++;
        }

        if (mult)
        {
            cout << 0 << '\n';
            continue;
        }

        if (k == 4)
        {
            int counte = 0;
            int count3or7 = INT_MAX;

            for (auto i : a)
            {
                if (!(i & 1))
                {
                    counte++;
                }
                if (i == 3 || i == 7)
                {
                    count3or7 = 1;
                }
            }

            cout << min(max(0ll, 2 - counte), count3or7) << '\n';

            continue;
        }

        for (auto i : a)
        {
            int temp = 0;
            while (i % k)
            {
                temp++;
                i++;
            }
            ans = min(ans, temp);
        }

        cout << ans << '\n';
    }

    return 0;
}