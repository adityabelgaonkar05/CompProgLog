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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<int> hor(n), ver(m);
        for (auto &i : hor)
            cin >> i;
        for (auto &i : ver)
            cin >> i;

        int ans = 0;

        sort(hor.begin(), hor.end());
        sort(ver.begin(), ver.end());

        for (auto i : ver)
        {
            if (i <= x)
                ans++;
        }

        for (auto i : hor)
        {
            if (i <= y)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}