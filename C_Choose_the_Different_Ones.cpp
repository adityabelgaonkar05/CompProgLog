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
        int n, m, k; cin >> n >> m >> k;
        set<int> a;
        set<int> b;
        int el;

        for(int i = 0; i < n; ++i) {cin >> el; a.insert(el);}
        for(int i = 0; i < m; ++i) {cin >> el; b.insert(el);}

        vector<int> kmap(k + 1);
        for(int i : a) 
        {
            if(i <= k) kmap[i] = 1;
        }

        for(int i : b)
        {
            if(i <= k) 
            {
                if(kmap[i]) kmap[i] = 3;
                else kmap[i] = 2;
            }
        }
        
        bool checkall = 0;

        map<int, int> mp;
        for(int i = 1; i <= k; ++i) 
        {
            if(kmap[i] == 0) {checkall = 1; break;}
            mp[kmap[i]]++;
        }

        if(checkall) cout << "NO\n";
        else 
        {
            if(mp[3] >= abs(mp[2] - mp[1])) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}