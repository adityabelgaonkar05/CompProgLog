#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;

        if (a == b || k >= max(a, b) || (gcd(a, b) > 1 && k >= max(a / gcd(a, b), b / gcd(a, b))))
            cout << 1 << '\n';

        else
            cout << 2 << '\n';
    }

    return 0;
}