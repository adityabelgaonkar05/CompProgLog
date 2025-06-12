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
        int m, n;
        cin >> n >> m;

        vector<int> a(m);
        int ans = INT_MAX;

        for (auto &i : a)
            cin >> i;

        map<int, int> mp;

        for (int i : a)
            mp[i]++;

        int l = 1, r = 2 * m;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int left = 0, help = 0;

            for (int i = 1; i <= n; ++i)
            {
                int el = mp[i];
                if (el - help > mid)
                {
                    left += el - help - mid;
                    help = 0;
                }

                else if (el - help <= mid && el > mid)
                {
                    help -= el - mid;
                }

                else
                {
                    help += (mid - el) / 2;
                }
            }

            if (left <= help)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }

            // cout << mid << ' ';
        }

        cout << ans << '\n';
    }

    return 0;
}