#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r;
    cin >> n >> l >> r;

    int ans = 0;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (a <= l && b >= r)
            ans++;
    }

    cout << ans;

    return 0;
}