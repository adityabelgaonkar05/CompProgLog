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
        int n;
        cin >> n;
        if ((n < 27) && (n & 1))
            cout << -1;

        else if (n & 1)
        {
            cout << "1 2 2 3 3 4 4 5 5 1 6 6 7 7 8 8 9 9 10 10 11 11 12 13 13 1 12 ";
            for (int i = 28; i <= n; ++i)
            {
                cout << i / 2 << ' ';
            }
        }

        else
        {
            for (int i = 0; i < n; ++i)
            {
                cout << (i) / 2 + 1 << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}