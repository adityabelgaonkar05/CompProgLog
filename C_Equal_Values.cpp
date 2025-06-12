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
            cin >> i;

        int ans = INT64_MAX;

        int l = 0, r = 0;

        while (l < n && r < n)
        {
            if (a[l] == a[r])
            {
                ans = min(l * a[l] + (n - r - 1) * a[r], ans);
                r++;
            }
            else
            {
                l++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}