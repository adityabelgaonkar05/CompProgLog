#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        map<char, int> mp;
        for(auto i : s) mp[i]++;

        for(auto i : mp) if(((int)i.first) - 64 <= i.second) ans++;
        cout << ans << '\n';
    }

    return 0;
}