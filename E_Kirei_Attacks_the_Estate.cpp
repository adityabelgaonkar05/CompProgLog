#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void dfs(int next, vector<int> &a, vector<vector<int>> &b, vector<int> &ans, int odd, int even, int odev, set<int> &vis)
{
    vis.insert(next);
    if (odev)
    {
        ans[next] = odd + a[next];
        odd += a[next];
        even = max(0ll, even - a[next]);
    }
    else
    {
        ans[next] = even + a[next];
        even += a[next];
        odd = max(0ll, odd - a[next]);
    }

    for (auto i : b[next])
    {
        if (vis.find(i) == vis.end())
        {
            dfs(i, a, b, ans, odd, even, odev ^ 1, vis);
        }
    }
}

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

        vector<vector<int>> b(n);
        for (int i = 1; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            b[x - 1].push_back(y - 1);
            b[y - 1].push_back(x - 1);
        }

        vector<int> ans(n);
        ans[0] = a[0];
        set<int> vis;
        vis.insert(0);

        for (auto x : b[0])
        {
            dfs(x, a, b, ans, 0, a[0], 1, vis);
        }

        for (int i = 0; i < n; ++i)
            cout << max(ans[i], a[i]) << ' ';
        cout << '\n';
    }

    return 0;
}