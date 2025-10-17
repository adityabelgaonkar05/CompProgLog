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

        vector<vector<int>> sb(35);

        int ind = 0;
        for (auto i : a)
        {
            for (int j = 0; j < 33; ++j)
            {
                if (!(i & (1ll << j)))
                {
                    sb[j].push_back(ind);
                }
            }

            ind++;
        }

        for (int j = 0; j < 33; ++j)
        {
            sb[j].push_back(n);
        }

        int q;
        cin >> q;
        while (q--)
        { // first bit set in el, but not in array
            int r;
            int k;
            cin >> r;
            cin >> k;
            int ans = 0;

            for (int i = 0; i < 31; ++i)
            {
                if ((1ll << i) & k)
                {
                    auto it = lower_bound(sb[i].begin(), sb[i].end(), r);
                    ans = min(ans, *it);
                }

                else if ((1ll << i) > k)
                {
                    auto it = lower_bound(sb[i].begin(), sb[i].end(), r);
                    ans = max(ans, *it);
                }
            }

            if (ans >= r)
                cout << ans << ' ';
            else
                cout << -1 << ' ';
        }

        cout << '\n';
    }

    return 0;
}