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
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        int ans = 0;
        int curr = 0;
        int l = n;
        int r = 0;

        vector<pair<int, int>> allpos;

        int start = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                start = i;
                break;
            }
        }

        for (int i = start; i < n - 1; ++i)
        {
            if (b[i] <= b[i + 1])
            {
                l = min(l, i);
                curr++;
                ans = max(curr, ans);
            }

            else
            {
                curr = 0;
                allpos.push_back({l, i});
                l = n;
            }
        }

        if (l != n)
        {
            allpos.push_back({l, n - 1});
        }

        pair<int, int> maxpair = allpos[0];
        for (auto i : allpos)
        {
            if (i.second - i.first > maxpair.second - maxpair.first)
            {
                maxpair = i;
            }
        }

        cout << maxpair.first + 1 << ' ' << maxpair.second + 1 << '\n';
    }

    return 0;
}