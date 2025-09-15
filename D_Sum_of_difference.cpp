#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    sort(a.rbegin(), a.rend());
    vector<int> pref = a;

    int ans = 0;

    for (int i = 1; i < n; ++i)
    {
        pref[i] += pref[i - 1];
    }

    for (int i = 0; i < n - 1; ++i)
    {
        // cout << a[i] << ' ' << (n - i - 1) << ' ' << pref[n - 1] << ' '
        //      << pref[i] << '\n';
        ans += a[i] * (n - i - 1) - (pref[n - 1] - pref[i]);
    }

    cout << ans << '\n';

    return 0;
}