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
        int n, w;
        cin >> n >> w;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        multiset<int> ms(a.begin(), a.end());

        int curr = 0;
        int ans = 1;

        for (int i = 0; i < n; ++i)
        {
            auto it = ms.lower_bound(w - curr);
            if (it == ms.end())
                it--;
            if (it == ms.begin() && *it > (w - curr))
            {
                curr = 0;
                ans++;
                i--;
            }
            else
            {
                if (*it > (w - curr))
                {
                    it--;
                }

                curr += *it;

                ms.erase(it);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}