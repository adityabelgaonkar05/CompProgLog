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
        for (auto &i : a)
            cin >> i;

        vector<pair<int, int>> b;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= i)
            {
                b.push_back({a[i], i});
            }
        }

        vector<int> c;

        for (auto i : b)
            c.push_back(i.first);

        sort(c.begin(), c.end());

        for (auto i : b)
        {
            int ind = i.second + 1;

            int ill = upper_bound(c.begin(), c.end(), ind) - c.begin();
            ans += c.size() - ill;
        }

        cout << ans << '\n';
    }

    return 0;
}