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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }

        int ans = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (a[i] != i && a[a[i]] != i)
            {
                int x = a[i];
                int y = a[a[i]];

                swap(a[a[i]], a[mp[i]]);
                mp[y] = mp[i];
                mp[i] = x;

                ans++;
            }
        }

        // for (auto i : a)
        //     cout << i << ' ';
        // cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}