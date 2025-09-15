#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        if (n < m)
        {
            long long time = (m - n + 1), ans = 0;

            for (auto i : a)
            {
                ans += (long long)(i * time++);
            }

            cout << ans << '\n';
        }
        else
        {
            long long time = 1, an = 0;

            for (int i = n - m; i < n; ++i)
            {
                an += (long long)(time++ * a[i]);
            }

            cout << an << '\n';
        }
    }

    return 0;
}