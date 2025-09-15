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
        int x;
        cin >> x;

        int ans = 999999999ll;
        int y = ans - x;

        cout << y << '\n';
        // cout << (x * 1000000000 + y) % (x + y) << '\n';
    }

    return 0;
}