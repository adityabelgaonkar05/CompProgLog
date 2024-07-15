#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int gg = 2147483647;
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        int ans = 0;
        map<int, int> mp;
        for(auto &i : a) {cin >> i; mp[i]++;}

        for(int x : a)
        {
            if(mp[x])
            {
                mp[x]--;
                int newel = x ^ gg;
                if(mp[newel]) mp[newel]--;
                ans++;
            }
        }

        cout << ans << '\n';
    } 

    return 0;
}