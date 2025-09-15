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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        map<int, int> mp;

        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        bool cond = 0;
        map<int, int> mp2;

        for (int i = 0; i < n; ++i)
        {
            if (mp[a[i]] % k != 0)
            {
                cond = 1;
                break;
            }

            mp2[a[i]] = mp[a[i]] / k;
        }

        if (cond)
        {
            cout << "0\n";
            continue;
        }

        map<int, int> cur;

        int ans = 0;

        int r = 0;
        for (int i = 0; i < n; i++)
        {
            while (r < n && cur[a[r]] < mp2[a[r]])
            {
                cur[a[r]]++;
                r++;
            }
            ans += (r - i);

            cur[a[i]]--;
        }
        cout << ans << "\n";
    }

    return 0;
}