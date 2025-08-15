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
        int l, r;
        cin >> l >> r;
        int tot = r - l + 1;
        l--;

        int ans = 0;

        vector<int> bbg({2, 3, 5, 7});

        for (auto i : bbg)
            ans -= (r / i) - (l / i);

        for (int i = 0; i < 4; ++i)
        {
            for (int j = i + 1; j < 4; ++j)
            {
                int todiv = bbg[i] * bbg[j];
                ans += (r / todiv) - (l / todiv);
            }
        }

        for (int i = 0; i < 4; ++i)
        {
            for (int j = i + 1; j < 4; ++j)
            {
                for (int k = j + 1; k < 4; ++k)
                {
                    int todiv = bbg[i] * bbg[j] * bbg[k];
                    ans -= (r / todiv) - (l / todiv);
                }
            }
        }

        ans += (r / (2 * 3 * 5 * 7)) - (l / (2 * 3 * 5 * 7));

        cout << tot + ans << '\n';
    }

    return 0;
}
