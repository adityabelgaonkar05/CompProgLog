#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> powk;
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int curr = 1;
        while (curr <= r2)
        {
            powk.push_back(curr);
            curr *= k;
        }

        int count = 0;
        for (int x : powk)
        {
            int minx = max(l1, (l2 + x - 1) / x);
            int maxx = min(r1, r2 / x);

            if (minx <= maxx)
            {
                count += (maxx - minx + 1);
            }
        }

        cout << count << endl;
    }

    return 0;
}
