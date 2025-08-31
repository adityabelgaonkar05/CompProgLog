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

        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; ++i)
        {
            cout << "? " << i << " " << n;

            for (int j = 1; j <= n; ++j)
                cout << " " << j;
            cout << endl;

            int ans;
            cin >> ans;
            if (ans == -1)
                return 0;
            dp[i] = ans;
        }

        int maxdp = *max_element(dp.begin(), dp.end());

        vector<vector<int>> a(maxdp + 1);

        for (int i = 1; i <= n; ++i)
        {
            if (dp[i] <= maxdp)
                a[dp[i]].push_back(i);
        }

        int cur = a[maxdp][0];

        vector<int> p;
        p.push_back(cur);

        int pl = maxdp - 1;

        while (pl)
        {
            int next = -1;

            for (auto i : a[pl])
            {
                cout << "? " << p.back() << ' ' << 2 << ' ' << p.back() << ' ' << i << endl;
                int ans;
                cin >> ans;
                if (ans == -1)
                    return 0;
                if (ans == 2)
                {
                    p.push_back(i);
                    break;
                }
            }

            pl--;
        }

        cout << "! " << p.size();
        for (int i : p)
            cout << " " << i;
        cout << endl;
    }

    return 0;
}