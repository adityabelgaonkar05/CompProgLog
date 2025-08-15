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

        bool cond = true;
        int curm = a[0];

        for (int i = 1; i < n; i++)
        {
            if (a[i] > 2 * curm - 1)
            {
                cond = false;
                break;
            }
            curm = min(curm, a[i]);
        }

        if (cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}