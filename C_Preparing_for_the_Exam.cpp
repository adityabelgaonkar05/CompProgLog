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
        int n, m, k;
        cin >> n >> m >> k;
        map<int, int> mp;
        vector<int> a(m);
        for (auto &i : a)
            cin >> i;
        vector<int> b(k);
        for (auto &i : b)
        {
            cin >> i;
            mp[i]++;
        }

        vector<int> missingnums;

        for (int i = 1; i <= n; ++i)
        {
            if (mp[i] == 0)
                missingnums.push_back(i);
        }

        if (missingnums.size() > 1)
        {
            for (int i = 0; i < m; ++i)
                cout << '0';
            cout << '\n';
        }

        else if (missingnums.size())
        {
            for (auto i : a)
            {
                if (i == missingnums[0])
                    cout << '1';
                else
                    cout << '0';
            }

            cout << '\n';
        }

        else
        {
            for (int i = 0; i < m; ++i)
                cout << '1';
            cout << '\n';
        }
    }

    return 0;
}