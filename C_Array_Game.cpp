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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        if (k >= 3)
        {
            cout << 0 << '\n';
            continue;
        }

        int timemin1 = INT64_MAX;
        int timemin2 = INT64_MAX;

        vector<int> b = a;
        sort(b.begin(), b.end());

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    continue;

                int gj = llabs(b[i] - b[j]);
                timemin1 = min(timemin1, gj);

                int ind = lower_bound(b.begin(), b.end(), gj) - b.begin();
                if (ind < n)
                {
                    timemin2 = min(llabs(b[ind] - gj), timemin2);
                }
                if (ind > 0)
                {
                    timemin2 = min(llabs(b[ind - 1] - gj), timemin2);
                }
            }
        }

        for (auto i : a)
        {
            timemin1 = min(timemin1, i);
        }

        if (k == 2)
        {
            cout << min(timemin1, timemin2) << '\n';
        }
        else
        {
            cout << timemin1 << '\n';
        }
    }

    return 0;
}