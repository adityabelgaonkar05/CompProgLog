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
        if ((a & 1) && (b & 1))
            cout << a * b + 1 << '\n';
        else if ((b & 1))
            cout << -1 << '\n';
        else if (!(b & 1) && ((b / 2) & 1) && (a & 1))
        {
            cout << -1 << '\n';
        }

        else
        {
            cout << a * (b / 2) + 2 << '\n';
        }
    }

    return 0;
}