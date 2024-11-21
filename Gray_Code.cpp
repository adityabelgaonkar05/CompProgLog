#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int maxpow2 = 0;

    for (int i = 6; i >= 0; --i)
    {
        if (n & (1 << i))
        {
            maxpow2 = i;
            break;
        }
    }

    for (int i = 0; i <= n; ++i)
    {
        for (int j = maxpow2; j >= 0; --j)
        {
            bool yes = (i & (1 << j));
            cout << yes;
        }

        cout << '\n';
    }

    return 0;
}