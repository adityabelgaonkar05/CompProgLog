#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int l = 0, r = 0;
    int curr = a[0] + b[0];
    int ans = 0;
    while (l < n - 1 && r < m - 1)
    {
        if (abs(a[l + 1] + b[r] - curr) > abs(a[l] + b[r + 1] - curr))
        {
            ans += abs(a[l + 1] + b[r] - curr);
            curr = a[l + 1] + b[r];
            l++;
        }

        else
        {
            ans += abs(a[l] + b[r + 1] - curr);
            curr = a[l] + b[r + 1];
            r++;
        }
        // cout << curr << '\n';
        // cout << l << ' ' << r << '\n';
    }

    if (r >= m - 1)
    {
        l++;
        while (l < n)
        {
            ans += abs(a[l] + b[m - 1] - curr);
            curr = a[l] + b[m - 1];
            l++;
        }
    }

    if (l >= n - 1)
    {
        r++;
        while (r < m)
        {
            ans += abs(a[n - 1] + b[r] - curr);
            curr = a[n - 1] + b[r];
            r++;
        }
    }

    cout << ans << '\n';

    return 0;
}