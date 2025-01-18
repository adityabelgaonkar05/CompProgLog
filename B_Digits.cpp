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
        int n, d;
        cin >> n >> d;
        cout << 1 << ' ';
        if (n >= 3)
            cout << 3 << ' ';
        else if (n * d % 3 == 0)
            cout << 3 << ' ';

        if (d == 5)
            cout << 5 << ' ';

        if (n >= 9)
            cout << 9 << ' ';
        else if (n * d % 9 == 0)
            cout << 9;

        cout << '\n';
    }

    return 0;
}