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
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> pp(n);
        for (auto &i : pp)
            cin >> i.first >> i.second;

        int currside = 0, currtime = 0;

        int ans = 0;

        for (auto i : pp)
        {
            int d = i.first - currtime;

            if (currside == i.second)
            {
                ans += d - (d & 1);
            }
            else
            {
                ans += d - (!(d & 1));
            }

            currtime = i.first;
            currside = i.second;

            // cout << ans << ' ';
        }

        ans += m - currtime;

        cout << ans << '\n';
    }

    return 0;
}