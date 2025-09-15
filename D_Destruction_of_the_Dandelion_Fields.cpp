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
        multiset<int> odd;
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0;

        for (auto &i : a)
            cin >> i;

        int ans = 0;

        // waste smallest odd on all evens, then keep trying odd;

        for (auto i : a)
        {
            if (i & 1)
                odd.insert(i);
            else
                even += i;
        }

        if (odd.size())
        {
            ans += even;
            auto it = odd.end();
            it--;
            ans += *it;
            odd.erase(it);
        }

        while (odd.size())
        {
            odd.erase(odd.begin());
            if (odd.size())
            {
                ans += *odd.rbegin();
                auto it = odd.end();
                it--;
                odd.erase(it);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}