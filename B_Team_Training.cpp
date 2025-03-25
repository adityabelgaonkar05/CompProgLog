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
            cin >> i;

        sort(a.rbegin(), a.rend());

        int curr = INT_MAX;
        int siz = 0;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            siz++;
            curr = min(a[i], curr);

            if (curr * siz >= k)
            {
                ans++;
                siz = 0;
                curr = INT_MAX;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}