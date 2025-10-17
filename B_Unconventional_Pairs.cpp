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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());
        int ans = 0;

        for (int i = 0; i < n - 1; i += 2)
        {
            ans = max(ans, a[i + 1] - a[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}