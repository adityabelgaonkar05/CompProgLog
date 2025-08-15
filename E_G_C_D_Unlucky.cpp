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
        vector<int> b(n);
        for (auto &i : a)
            cin >> i;

        for (auto &i : b)
            cin >> i;

        bool pos = 1;

        int gg = a[n - 1];

        if (b[0] != gg)
            pos = 0;
        for (int i = 1; i < n; ++i)
            if (a[i - 1] % a[i] != 0)
                pos = 0;

        for (int i = 0; i + 1 < n; ++i)
            if (b[i + 1] % b[i] != 0)
                pos = 0;
        for (int i = 0; i < n; ++i)
        {
            if (gcd(a[i], b[i]) != gg)
                pos = 0;
        }

        for (int i = 0; i + 1 < n; ++i)
        {
            if (gcd(a[i], b[i + 1]) != gg)
                pos = 0;
        }

        if (pos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}