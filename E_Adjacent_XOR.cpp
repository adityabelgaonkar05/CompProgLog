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
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        vector<int> c(a.begin(), a.end());

        bool cond = 0;

        for (int i = n - 2; i >= 0; --i)
        {
            if (a[i] == b[i])
                continue;

            if ((a[i] ^ a[i + 1]) == b[i])
                continue;

            if ((a[i] ^ b[i + 1]) == b[i])
                continue;
            cond = 1;
        }

        if (a.back() != b.back())
            cond = 1;
        if (cond)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}