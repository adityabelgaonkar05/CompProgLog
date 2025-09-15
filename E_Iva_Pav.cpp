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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<vector<int>> prefix({a[0]});

        for (auto it : a)
        {
            prefix.push_back(prefix.back() & i);
        }

        int q;
        cin >> q;

        while (q--)
        {
            int l, k;
            cin >> l >> k;

            l--;
            int r = n - 1;

            int ans = l;

            while (l <= r)
            {
                int mid = (l + r) / 2;

                if (prefix[mid] >= k)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (prefix)
        }

        cout << '\n';
    }

    return 0;
}