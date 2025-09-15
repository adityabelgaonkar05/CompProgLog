#include <bits/stdc++.h>
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
        vector<pair<int, int>> a(n);
        for (auto &i : a)
            cin >> i.first >> i.second;

        int le = 0, ri = 1000020000;

        int ans = ri;

        while (le <= ri)
        {
            int k = le + (ri - le) / 2;
            int l = 0, r = 0;

            bool poss = 1;

            for (auto i : a)
            {
                if (i.first < l)
                {
                    l = max(i.first, l - k);
                }
                else
                {
                    l = min(i.first, l + k);
                }

                if (i.second < r)
                {
                    r = max(i.second, r - k);
                }
                else
                {
                    r = min(i.second, r + k);
                }

                if (l > i.second || r < i.first)
                {
                    poss = 0;
                    break;
                }

                l = max(l, i.first);
                r = min(r, i.second);

                // cout << l << ' ' << r << '\n';
            }

            if (poss)
            {
                ans = k;
                ri = k - 1;
            }
            else
            {
                le = k + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}