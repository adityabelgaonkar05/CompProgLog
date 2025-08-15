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

        int maxh = 0;
        int minh = 0;

        bool poss = 1;

        for (int i = 0; i < n; ++i)
        {
            int x, b;
            cin >> x >> b;

            if (a[i] == 1)
            {
                maxh++;
                minh++;
            }

            else if (a[i] == -1)
            {
                maxh++;
            }

            maxh = min(maxh, b);
            minh = max(minh, x);

            if (maxh < minh)
            {
                poss = 0;
            }
        }

        if (poss)
            cout << "YES\n";
        else
            cout << "-1\n";
    }

    return 0;
}