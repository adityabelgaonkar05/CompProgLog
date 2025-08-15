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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(3));

        for (auto &i : a)
            for (auto &j : i)
                cin >> j;

        int ans = k;

        sort(a.begin(), a.end());

        for (auto i : a)
        {
            if (k >= i[0] && k <= i[1])
            {
                k = max(k, i[2]);
            }
        }

        cout << k << '\n';
    }

    return 0;
}