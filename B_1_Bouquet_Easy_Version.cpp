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
        int n, m; cin >> n >> m; 
        set<int> a;
        map<int, int> mp;
        int el;
        int maxel = 0;
        for(int i = 0; i < n; ++i) {cin >> el; a.insert(el); mp[el]++;}
        for(auto i : a)
        {
            int add = mp[i] * i + (i + 1) * mp[i + 1];
            // 3 * 206 + 207 * 4 = 1446
            
            if(add <= m) maxel = max(maxel, add);
            else
            {
                int al = mp[i];
                int ej = mp[i + 1];

                

                maxel = max(d, maxel);
            }
        }

        cout << maxel << '\n';
    }

    return 0;
}