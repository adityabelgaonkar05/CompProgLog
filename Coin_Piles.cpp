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
        int a, b;
        cin >> a >> b;
        if (a < b)
            swap(a, b);
        if (a - b > b)
            cout << "NO\n";
        else if (a == b && (a % 3 == 0))
            cout << "YES\n";
        else if ((a - b) & 1)
            cout << "YES\n";
        else if (a == 2 * b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}