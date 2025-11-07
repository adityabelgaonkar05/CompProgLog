#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == c && b == c && d == c)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}