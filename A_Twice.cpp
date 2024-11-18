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
        set<int> s;
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
            s.insert(i);
        }
        int ans = 0;

        for (auto i : s)
        {
            ans += mp[i] / 2;
        }
        cout << ans << '\n';
    }

    return 0;
}