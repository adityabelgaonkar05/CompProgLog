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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        int ans = 0;

        map<pair<int, int>, int> mp;

        for (auto i : a)
        {
            ans += mp[{i % y, (x - (i % x)) % x}];
            mp[{i % y, i % x}]++;
        }

        cout << ans << '\n';
    }

    return 0;
}