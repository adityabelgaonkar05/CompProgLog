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
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        int ans = 0;

        int l = 0, r = 1;

        while (r < n)
        {
            if (a[r] * 2 <= a[r - 1])
            {
                l = r++;
            }
            else
            {
                if (r - l == k)
                {
                    ans++;
                    l++;
                    r++;
                }
                else
                {
                    r++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}