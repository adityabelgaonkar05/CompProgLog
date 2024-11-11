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
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
            cout << 0 << '\n';
        else if (i == 2)
            cout << 6 << '\n';

        else
        {
            int ans = (i * i) * ((i * i) - 1) / 2;
            int pos = (i - 2) * (i - 1) * 4;

            cout << ans - pos << '\n';
        }
    }

    return 0;
}