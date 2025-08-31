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
        vector<int> a(n), b(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        vector<int> strong;
        vector<pair<int, int>> p;

        for (int i = 0; i < n; ++i)
        {
            p.push_back({a[i] - b[i], i});
        }

        sort(p.rbegin(), p.rend());
        int maxi = p[0].first;

        for (int i = 0; i < n; ++i)
        {
            if (maxi == p[i].first)
                strong.push_back(p[i].second + 1);

            else
                break;
        }

        sort(strong.begin(), strong.end());
        cout << strong.size() << '\n';
        for (auto &i : strong)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}