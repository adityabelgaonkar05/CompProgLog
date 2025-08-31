#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> pow3(35);
    int jj = 1;

    for (int i = 0; i <= 34; ++i)
    {
        pow3[i] = jj;
        jj *= 3;
    }

    // cout << jj << '\n';

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int l = 0, r = 34;
        int ans = INT64_MAX;

        // find the smallest MAX power which can satify tem = 0 within k turns

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int cost = 0;
            int turn = 0;
            int tem = n;

            while (tem)
            {
                if (turn > k)
                    break;

                if (k - turn >= tem)
                {
                    cost += tem * 3;
                }

                int tt = 0;
                while (tt + 1 <= mid && pow3[tt + 1] <= tem)
                {
                    tt++;
                }

                // cout << tt << ' ';

                turn += tem / pow3[tt];
                if (tt == 0)
                    cost += (tem / pow3[tt]) * 3;
                else
                    cost += (tem / pow3[tt]) * (pow3[tt + 1] + tt * pow3[tt - 1]);

                tem -= pow3[tt] * (tem / pow3[tt]);
            }

            // cout << cost << '\n';

            if (turn > k || tem > 0)
            {
                l = mid + 1;
            }
            else
            {
                ans = min(cost, ans);
                r = mid - 1;
            }
        }

        if (ans == INT64_MAX)
            cout << -1 << '\n';

        else
            cout << ans << '\n';
    }

    return 0;
}
