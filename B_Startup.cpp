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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a;
        int ans = 0;

        map<int, int> mp;
        set<int> s;

        for (int i = 0; i < k; ++i)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({y, x});
            s.insert(x);
            mp[x] += y;
        }

        vector<int> neww;

        for (auto i : s)
        {
            neww.push_back(mp[i]);
        }

        sort(neww.rbegin(), neww.rend());

        for (auto i : neww)
        {
            if (n-- > 0)
            {
                ans += i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}