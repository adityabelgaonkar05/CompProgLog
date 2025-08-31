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
        int n;
        cin >> n;

        vector<vector<int>> a(n);

        bool pos = 0;

        map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; ++j)
            {
                int e;
                cin >> e;
                a[i].push_back(e);
                mp[e]++;
            }
        }

        for (auto i : a)
        {
            bool yes = 1;

            for (auto j : i)
                if (mp[j] == 1)
                    yes = 0;
            if (yes)
            {
                pos = 1;
                break;
            }
        }

        if (pos)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}