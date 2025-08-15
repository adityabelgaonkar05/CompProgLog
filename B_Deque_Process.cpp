#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int l = 0, r = n - 1;
        string ans = "";

        while (r - l >= 2)
        {
            int aa = a[l];
            int b = a[l + 1];
            int c = a[l + 2];
            int d = a[r];
            int e = a[r - 1];
            int f = a[r - 2];

            // LLR LRL RLL RLR RRL LRR LLL RRR

            if ((aa < b && d < b) || (aa > b && d > b))
            {
                ans += "LLR";
                l += 2;
                r--;
            }
            else if ((aa < d && b < d) || (aa > d && b > d))
            {
                ans += "LRL";
                l += 2;
                r--;
            }
            else if ((d < e && aa < e) || (d > e && aa > e))
            {
                ans += "RLL";
                r -= 2;
                l++;
            }
            else if ((b < d && f < d) || (b > d && f > d))
            {
                ans += "RLR";
                l++;
                r -= 2;
            }
            else if ((c < d && e < d) || (c > d && e > d))
            {
                ans += "RRL";
                l++;
                r -= 2;
            }
            else if ((aa < e && f < e) || (aa > e && f > e))
            {
                ans += "LRR";
                l++;
                r -= 2;
            }
            else
            {
                ans += "LLL";
                l += 3;
            }
        }

        for (int i = l; i <= r; ++i)
            ans.push_back('L');

        cout << ans << '\n';
    }

    return 0;
}