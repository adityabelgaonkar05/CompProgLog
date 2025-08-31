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
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        sort(a.rbegin(), a.rend());
        int ans = 0;

        for (int i = 0; i < n - 1; i += 2)
        {
            ans += max(a[i], a[i + 1]);
            int mini = min(a[i], a[i + 1]);
            a[i] -= mini;
            a[i + 1] -= mini;
        }

        if (n & 1)
        {
            ans += max(a.back(), a[n - 2]);
        }

        cout << ans << '\n';
    }

    return 0;
}