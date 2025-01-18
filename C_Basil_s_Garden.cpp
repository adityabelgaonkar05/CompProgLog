#include <bits/stdc++.h>
#define int long long
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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ans = a[n - 1];

        for (int i = n - 2; i >= 0; --i)
        {
            if (a[i] <= a[i + 1])
            {
                ans++;
            }

            else
            {
                ans = max(ans, a[i]);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}