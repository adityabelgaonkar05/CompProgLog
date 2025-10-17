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
        // just remove previous gas stations gass if more expensive

        int n, b, c;
        cin >> n >> b >> c;

        int curr = 0;

        vector<vector<int>> a(n, vector<int>(2));

        for (auto &i : a)
            for (auto &j : i)
                cin >> j;

        int ans = 0;

        int prevcost = 0;
        int prevdist = 0;

        for (int i : a)
        {
            if (i[0] == 0)
            {
            }

            int currcost = i[1];
            int currloc = i[0];

            if (i > ans)
                break;

            if (prevcost > currcost)
            {
                b += (c - currloc + prevdist) * prevcost;
            }
        }
    }

    return 0;
}