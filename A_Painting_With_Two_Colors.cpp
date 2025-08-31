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
        int n, a, b;
        cin >> n >> a >> b;

        if (b >= a && (b & 1) == (n & 1))
        {
            cout << "YES\n";
        }
        else if (a > b && (b & 1) == (n & 1) && (n & 1) == (a & 1))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}