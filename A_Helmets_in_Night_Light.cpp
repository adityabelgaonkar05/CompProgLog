#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

bool customComp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        vector<pair<int, int>> a(n);

        for (auto &i : a)
            cin >> i.second;
        for (auto &i : a)
            cin >> i.first;

        sort(a.begin(), a.end(), customComp);

        // i.second is number of people we can tell for cost of i.first
        //  for(auto &i : a) cout << i.second << ' '; cout << '\n';
        //  for(auto &i : a) cout << i.first << ' '; cout << '\n';

        int ans = p;
        int unlocked = 1;

        for (int i = 0; i < n; ++i)
        {
            if (a[i].first > p || unlocked >= n)
                break;
            if (n - unlocked < a[i].second)
            {
                ans += a[i].first * (n - unlocked);
            }
            else
            {
                ans += a[i].first * a[i].second;
            }

            unlocked += a[i].second;
        }

        ans += p * max(0ll, n - unlocked);

        cout << ans << '\n';
    }

    return 0;
}