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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        if (n > 1)
        {
            int ans = INT_MAX;
            ans += 1082;

            for (int i = 0; i < n / 2 + (n & 1); ++i)
            {
                if ((a[i] % ans) != (a[n - 1 - i] % ans))
                {
                    ans = abs(a[i] - a[n - 1 - i]);
                }
            }

            if (ans == 2147484729)
                ans = 0;
            cout << ans << '\n';
        }

        else
            cout << 0 << '\n';
    }

    return 0;
}