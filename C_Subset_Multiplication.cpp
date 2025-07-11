#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

set<int> cd(int f, int h)
{
    int a = max(f, h);
    int b = min(f, h);
    set<int> res;
    for (int i = 1; i * i <= a; ++i)
    {
        if (a % i == 0)
        {
            int x1 = i;
            int x2 = a / i;

            if (b % (a / x1) == 0)
                res.insert(x1);
            if (x1 != x2 && b % (a / x2) == 0)
                res.insert(x2);
        }
    }
    return res;
}

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

        int ans = 1;

        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i + 1] % a[i])
            {
                auto it = cd(a[i], a[i + 1]);

                for (auto x : it)
                    cout << x << ' ';
                cout << '\n';
            }
        }

        // cout << ans << '\n';
        cout << '\n';
    }

    return 0;
}