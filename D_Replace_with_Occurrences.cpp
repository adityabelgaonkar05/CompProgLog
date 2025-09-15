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
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        bool poss = 1;

        for (auto i : a)
        {
            if (mp[i] % i != 0)
            {
                poss = 0;
                break;
            }
        }

        if (!poss)
        {
            cout << -1 << '\n';
            continue;
        }

        // cout << "POSS\n";

        map<int, vector<int>> positions;

        for (int i = 0; i < n; ++i)
            positions[a[i]].push_back(i);

        vector<int> ans(n);
        int cur = 0;

        // 1 2 3 2 3 3

        for (auto p : positions)
        {
            int val = p.first;
            vector<int> b = p.second;

            for (int i = 0; i < b.size(); i += val)
            {
                ++cur;

                for (int j = i; j < i + val; ++j)
                {
                    ans[b[j]] = cur;
                }
            }
        }

        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}