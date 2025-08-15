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
        int n;
        cin >> n;
        int y = 9;

        while (n)
        {
            y = min(y, n % 10);
            n /= 10;
        }

        cout << y << '\n';
    }

    return 0;
}