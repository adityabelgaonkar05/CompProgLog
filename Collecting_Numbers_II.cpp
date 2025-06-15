#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    while (m--)
    {
        int e, b;
        cin >> e >> b;

        swap(a[e - 1], a[b - 1]);

        vector<int> ind(n + 1);

        for (int i = 0; i < n; ++i)
        {
            ind[a[i]] = i;
        }

        int ans = 1;

        for (int i = 1; i < n; ++i)
        {
            if (ind[i] > ind[i + 1])
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}