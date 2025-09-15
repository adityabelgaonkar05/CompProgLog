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

        vector<int> a(n), b(n);
        a[0] = 1;

        for (int i = 1; i < n; ++i)
            cin >> a[i];

        for (auto &i : b)
            cin >> i;

        multiset<int> c(b.begin(), b.end());

        int ans = 0;

        for (auto i : a)
        {
            auto it = c.upper_bound(i);
            if (it != c.end())
            {
                ans++;
                c.erase(it);
            }
        }

        cout << n - ans << '\n';
    }

    return 0;
}