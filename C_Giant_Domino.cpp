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

        int first = a[0];
        int second = a.back();

        sort(a.begin(), a.end());

        int ff = lower_bound(a.begin(), a.end(), first) - a.begin();
        int ss = lower_bound(a.begin(), a.end(), second) - a.begin();

        bool cond = 0;
        int prev = ff;
        int ans = 2;

        for (int i = ff + 1; i <= ss; ++i)
        {
            if (a[i] > 2 * a[prev])
            {
                cond = 1;
                break;
            }
            else if (a[i] <= 2 * a[prev] && (i == ss || a[i + 1] > 2 * a[prev]))
            {
                prev = i;
                if (i != ss)
                    ans++;
            }
        }

        if (cond)
            cout << "-1\n";
        else
            cout << ans << '\n';
    }

    return 0;
}