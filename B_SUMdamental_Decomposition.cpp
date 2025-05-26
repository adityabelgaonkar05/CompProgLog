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
        int n, k;
        cin >> n >> k;
        if (n == 1 && k == 0)
        {
            cout << -1 << '\n';
            continue;
        }
        int sb = 0;
        int smallestsetbit = (1 << 30);
        for (int i = 30; i >= 0; --i)
        {
            if ((1 << i) & k)
            {
                sb++;
            }
            else
                smallestsetbit = (1 << i);
        }

        if (k == 0)
        {
            if (n & 1)
            {
                cout << 5 + (n - 2) << '\n';
            }
            else
                cout << n << '\n';
        }

        else if (k == 1)
        {
            if (n & 1)
            {
                cout << n << '\n';
            }

            else
            {
                cout << 5 + (n - 2) << '\n';
            }
        }

        else if (sb >= n)
        {
            cout << k << '\n';
        }

        else
        {
            cout << k + (n - sb) + ((n - sb) & 1) << '\n';
        }
    }

    return 0;
}