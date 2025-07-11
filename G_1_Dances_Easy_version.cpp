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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);

        a[0] = m;

        for (int i = 1; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        int ans = 0;

        int l = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < b[i])
            {
                // cout << l << ' ';

                int curr = i - l;
                int st = l;

                for (int j = l; j < i; ++j)
                {
                    for (int k = st; k < i; ++k)
                    {
                        if (a[j] < b[k])
                        {
                            curr--;
                            st = k + 1;
                            break;
                        }
                    }
                }

                ans += curr;
                l = i + 1;
            }
        }

        int curr = n - l;
        int st = l;

        for (int j = l; j < n; ++j)
        {
            for (int k = st; k < n; ++k)
            {
                if (a[j] < b[k])
                {
                    curr--;
                    st = k + 1;
                    break;
                }
            }
        }

        ans += curr;

        cout << ans << '\n';
    }

    return 0;
}