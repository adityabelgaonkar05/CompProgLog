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
        vector<int> a(n), b(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        int ans = 0;

        while (true)
        {
            bool cond1 = 0;
            ans++;

            for (int i = 0; i < n; ++i)
            {
                if (a[i] > b[i])
                {
                    a[i]--;
                    cond1 = 1;
                    break;
                }
            }
            for (int i = 0; i < n; ++i)
            {
                if (a[i] < b[i])
                {
                    a[i]++;
                    break;
                }
            }

            if (!cond1)
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}