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
        int n;
        cin >> n;
        int sumallo = 0;
        int sumallp = 0;

        cout << "1 1 " << n << endl;
        cin >> sumallo;
        cout << "2 1 " << n << endl;
        cin >> sumallp;

        int sizep = sumallp - sumallo;

        int l = 1, r = n;

        int ans = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            cout << "1 " << mid << " " << n << endl;
            int el;
            cin >> el;
            cout << "2 " << mid << " " << n << endl;
            int el2;
            cin >> el2;

            if (el2 - el < sizep)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
                ans = mid;
            }
        }

        cout << "! " << ans << ' ' << ans + sizep - 1 << endl;
    }

    return 0;
}