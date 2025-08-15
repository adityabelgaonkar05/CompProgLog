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
        vector<vector<int>> a(n, vector<int>(4));
        for (auto &i : a)
        {
            for (auto &j : i)
                cin >> j;
        }

        // transfering one zero only costs 1 operation
        // transfering one one costs (num(0) + 1) * n(needed 1) in that pile

        int outofplaceones = 0;
        int outofplacezeroes = 0;
        vector<vector<int>> extraones;

        // first take care of all extraones with zeroes on top of them

        for (auto i : a)
        {
            if (i[0] > i[2])
            {
                outofplacezeroes += i[0] - i[2];
                i[0] = i[2];
            }

            if (i[1] > i[3])
            {
                int extra = i[1] - i[3];
                outofplaceones += extra + (i[0]);
            }
        }

        cout << outofplacezeroes + outofplaceones << '\n';
    }

    return 0;
}