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
        int k, x;
        cin >> k >> x;
        int maxx = (1ll << (k + 1));

        int a = x;
        int b = (1ll << k);

        vector<int> ops;

        while (a != b)
        {
            if (a <= maxx / 2)
            {
                a = 2 * a;
                ops.push_back(1);
            }
            else
            {
                a = 2 * a - maxx;
                ops.push_back(2);
            }
        }

        cout << ops.size() << '\n';
        for (int i = (int)ops.size() - 1; i >= 0; --i)
        {
            cout << ops[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}