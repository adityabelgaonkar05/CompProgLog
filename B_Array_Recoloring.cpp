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

        int ans = 0;

        for (int i = 0; i < k + 1; ++i)
        {
            ans += a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}