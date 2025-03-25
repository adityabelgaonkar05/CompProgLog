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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (auto &i : a)
        {
            cin >> i;
        }

        int ans = 0;

        int l = 0;
        int r = n - 1;
        sort(a.begin(), a.end());

        while (l < r)
        {
            int res = a[l] + a[r];
            if (res < k)
                l++;
            else if (res > k)
                r--;
            else
            {
                ans++;
                l++;
                r--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}