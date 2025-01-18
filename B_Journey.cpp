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
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int ans = n / (a + b + c) * 3;
        if (ans / 3 * (a + b + c) < n)
        {
            ans += 1;

            if ((ans - 1) / 3 * (a + b + c) + a < n)
                ans += 1;
        }

        cout << ans << '\n';
    }

    return 0;
}