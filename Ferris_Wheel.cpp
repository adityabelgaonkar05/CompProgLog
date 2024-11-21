#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    sort(a.begin(), a.end());
    int l = 0,
        r = n - 1;

    int ans = 0;
    while (l < r)
    {
        if (a[l] + a[r] <= k)
        {
            l++;
        }

        r--;
        ans++;
    }

    if (l == r)
        ans++;

    cout << ans << '\n';

    return 0;
}