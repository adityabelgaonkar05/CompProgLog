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
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        set<int> b(a.begin(), a.end());

        int ans = 0;

        for (int i = 1; i <= 100; ++i)
        {
            int c = 0;

            for (auto x : b)
            {
                if (mp[x] >= i)
                    c += i;
            }

            ans = max(ans, c);
        }

        cout << ans << '\n';
    }

    return 0;
}