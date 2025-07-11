#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    int hh = n - k + 1;

    double ans = 0;
    int sum = 0;

    for (int i = 0; i < k; ++i)
    {
        sum += a[i];
    }

    ans += (double)sum / (double)hh;

    for (int i = k; i < n; ++i)
    {
        sum -= a[i - k];
        sum += a[i];
        ans += (double)sum / (double)hh;
    }

    cout << fixed << setprecision(10);
    cout << ans << '\n';
    // }

    return 0;
}