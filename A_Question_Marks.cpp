#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        map<char, int> mp;
        int n; cin >> n;
        string s; cin >> s;

        for(int i = 0; i < 4 * n; ++i) mp[s[i]]++;

        int ans = min(mp['A'], n);
        ans += min(mp['B'], n);
        ans += min(mp['C'], n);
        ans += min(mp['D'], n);

        cout << ans << '\n';
    }

    return 0;
}