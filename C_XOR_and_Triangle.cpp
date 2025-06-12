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
        if (n <= 4)
            cout << -1 << '\n';
        else
        {
            int ans = 0;

            for (int i = 0; i < 31; ++i)
            {
                if (ans + (1 << i) >= n)
                    break;
                else
                    ans += (1 << i);
            }

            int neww = n ^ ans;

            if (ans + n > neww && neww + n > ans && neww + ans > n)
                cout << ans << '\n';

            else
                cout << -1 << '\n';
        }
    }

    return 0;
}