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

        int ans = n;

        vector<vector<int>> ind(k + 1);

        for (int i = 0; i < n; ++i)
        {
            ind[a[i]].push_back(i);
        }

        for (int p = 1; p <= k; ++p)
        {
            if (ind[p].size() == 0)
                continue;
            multiset<int> comp;

            comp.insert(ind[p][0]);

            for (int i = 1; i < ind[p].size(); ++i)
            {
                comp.insert(ind[p][i] - ind[p][i - 1] - 1);
            }

            comp.insert(n - 1 - ind[p].back());

            auto it = comp.find(*comp.rbegin());
            int half = *it / 2;
            comp.erase(it);
            comp.insert(half);
            ans = min(ans, *comp.rbegin());
        }

        cout << ans << '\n';
    }

    return 0;
}