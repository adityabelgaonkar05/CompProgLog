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
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        map<int, int> mp; for(int i : a) mp[i]++;
        int maxel = *max_element(a.begin(), a.end());

        if(mp[maxel] & 1) cout << "YES\n";
        else
        {
            bool cond = 0;
            for(auto i : mp)
            { 
                if(i.first != maxel && (i.second & 1))
                {   
                    cond = 1;
                }
            }

            if(cond) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}