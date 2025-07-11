#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));

    for (auto &i : a[0])
        cin >> i;
    for (auto &i : a[1])
        cin >> i;

    vector<vector<int>> ans(2);
    ans[0].push_back(a[0][0]);
    ans[1].push_back(a[1][0]);

    for (int i = 1; i < n; ++i)
    {
        ans[0].push_back(max(ans[0][i - 1], ans[1][i - 1] + a[0][i]));
        ans[1].push_back(max(ans[1][i - 1], ans[0][i - 1] + a[1][i]));
    }

    // for (auto i : ans)
    // {
    //     for (auto j : i)
    //         cout << j << ' ';
    //     cout << '\n';
    // }

    cout << max(ans[0].back(), ans[1].back());

    return 0;
}