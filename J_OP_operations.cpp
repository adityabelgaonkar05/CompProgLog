#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    vector<vector<int>> b(m, vector<int> (3));
    vector<pair<int, int>> c(k);
    for (auto &i : a) cin >> i;

    for (int i = 0; i < m; ++i)
    {
        for (auto &j : b[i])
        {
            cin >> j;
        }
    }

    for (auto &i : c)
    {
        cin >> i.first >> i.second;
    }

    // for(auto i : op) cout << i.first << ' ' << i.second << ' ';

    vector<int> op(m + 1, 0);
    for (auto &i : c)
    {
        op[i.first - 1]++;
        if (i.second < m)
        {
            op[i.second]--;
        }
    }

    for (int i = 1; i < m; ++i)
    {
        op[i] += op[i - 1];
    }

    vector<int> hashmap(n + 1, 0);
    for (int i = 0; i < m; ++i)
    {
        if (op[i] > 0)
        {
            hashmap[b[i][0] - 1] += b[i][2] * op[i];
            if (b[i][1] < n)
            {
                hashmap[b[i][1]] -= b[i][2] * op[i];
            }
        }
    }

    for (int i = 1; i < n; ++i)
    {
        hashmap[i] += hashmap[i - 1];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] + hashmap[i] << ' ';
    }

    return 0;
}

//