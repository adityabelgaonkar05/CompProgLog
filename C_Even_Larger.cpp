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
        vector<int> a(n + 2);

        a[0] = 0;
        a[n + 1] = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 2; i <= n; i += 2)
        {
            if (a[i - 1] + a[i + 1] > a[i])
            {
                int old = a[i + 1];

                a[i + 1] = a[i];
                ans += old - a[i + 1];

                if (a[i - 1] + a[i + 1] > a[i])
                {
                    if (a[i + 1] > 0)
                    {
                        a[i + 1]--;
                        ans++;
                    }
                }

                if (a[i - 1] + a[i + 1] > a[i])
                {
                    old = a[i - 1];
                    a[i - 1] = a[i];
                    ans += old - a[i - 1];
                }

                if (a[i - 1] + a[i + 1] > a[i])
                {
                    if (a[i - 1] > 0)
                    {
                        a[i - 1]--;
                        ans++;
                    }
                }
            }
        }

        // for (int i = 1; i <= n; ++i)
        //     cout << a[i] << ' ';
        // cout << '\n';
        cout << ans << '\n';
    }

    return 0;
}