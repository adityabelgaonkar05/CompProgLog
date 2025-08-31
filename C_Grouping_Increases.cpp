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

        vector<int> c, b;
        c.push_back(INT_MAX);
        b.push_back(INT_MAX);
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (c.back() >= a[i] && b.back() >= a[i])
            {
                if (c.back() <= b.back())
                    c.push_back(a[i]);
                else
                    b.push_back(a[i]);
            }
            else if (c.back() < a[i] && b.back() < a[i])
            {
                if (c.back() <= b.back())
                    c.push_back(a[i]);
                else
                    b.push_back(a[i]);

                ans++;
            }
            else
            {
                if (c.back() >= b.back())
                    c.push_back(a[i]);
                else
                    b.push_back(a[i]);
            }
        }

        // for (auto i : c)
        //     cout << i << ' ';
        // cout << '\n';
        // for (auto i : b)
        //     cout << i << ' ';
        // cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}