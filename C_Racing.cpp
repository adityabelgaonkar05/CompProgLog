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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<pair<int, int>> p(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : p)
            cin >> i.first >> i.second;

        vector<pair<int, int>> pos;

        int low = 0, hi = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == -1 || a[i] == 1)
            {
                low = max(0ll, low - 1);
                hi++;
            }

            pos.push_back({low, high});
        }
    }

    return 0;
}