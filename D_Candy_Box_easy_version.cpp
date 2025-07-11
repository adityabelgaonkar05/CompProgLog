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
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        multiset<int> ms;
        set<int> b(a.begin(), a.end());

        for (int i : b)
            ms.insert(mp[i]);

        int ans = 0;
        for (int i = *ms.rbegin(); i > 0; --i)
        {
            auto it = ms.lower_bound(i);
            if (it != ms.end())
            {
                ms.erase(it);
                ans += i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}