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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> mp;
        set<pair<int, int>> ss;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        int ans = 0;

        for (auto i : a)
        {
            ss.insert({mp[i], i});
        }

        for (auto i : ss)
        {
            if (i.first <= k)
            {
                k -= i.first;
                ans++;
            }

            else
                break;
        }

        cout << max(1ll, ss.size() - ans) << '\n';
    }

    return 0;
}