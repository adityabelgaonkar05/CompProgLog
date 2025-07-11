#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if (l < r)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}