#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> check(105, 0), a(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }

    int finalval = -1;

    int pp = 0;

    vector<pair<int, int>> b(k);

    for (auto &i : b)
        cin >> i.first >> i.second;

    for (auto i : b)
    {
        check[i.second] = i.first;
        finalval = max(finalval, i.second);
    }

    for (int i = 1; i < finalval && pp < m; ++i)
    {
        if (check[i] == 0)
        {
            check[i] = a[pp];
            pp++;
        }
    }

    // for (int i : check)
    //     cout << i << ' ';

    for (int i = 1; i <= n; ++i)
    {
        if (check[i] == 0)
        {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}