#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int currtotal = 0;

        if (n == 1)
            cout << 1 << '\n';
        else if (n <= 4)
            cout << 2 << '\n';
        else
        {
            currtotal = 4;
            ans = 2;
            while (currtotal < n)
            {
                currtotal *= 2;
                currtotal += 2;
                ans++;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}