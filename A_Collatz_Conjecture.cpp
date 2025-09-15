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
        int k, x;
        cin >> k >> x;

        while (k--)
        {
            x *= 2;
        }

        cout << x << '\n';
    }

    return 0;
}