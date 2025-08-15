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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ans = 0;

        int curr = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
            {
                curr++;
                if (curr == k)
                {
                    ans++;
                    i++;
                    curr = 0;
                }
            }
            else
                curr = 0;
        }

        cout << ans << '\n';
    }

    return 0;
}