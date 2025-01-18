#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        // check all ranges which are only one number and those numbers can never be used
        int n;
        cin >> n;
        vector<pair<int, int>> q(n);
        set<int> usable;
        map<int, int> unusable;
        int minterm = (int)2e9;
        int maxterm = -289987;
        for (auto &i : q)
        {
            cin >> i.first >> i.second;
            minterm = min(minterm, i.first);
            maxterm = max(maxterm, i.second);
            if (i.second == i.first)
                unusable[i.first]++;
        }

        for (int i = minterm; i <= maxterm; ++i)
        {
            if (!unusable[i])
                usable.insert(i);
        }

        for (auto i : q)
        {
            if (i.first == i.second)
            {
                if (unusable[i.first] == 1)
                    cout << 1;
                else
                    cout << 0;
            }

            else
            {
                auto it = usable.lower_bound(i.first);
                if (*it <= i.second)
                    cout << 1;
                else
                    cout << 0;
            }
        }

        // for (auto i : usable)
        //     cout << i << ' ';
        // cout << '\n';

        cout << '\n';
    }

    return 0;
}