#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (a != lcm(a, b))
            ans++;
        if (b != lcm(a, b))
            ans++;

        cout << ans << '\n';
    }

    return 0;
}