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
        int ans = 0;

        for(int x : a)
        {
            for(int i = 31; i >= 0; --i)
            {
                if(((1 << i) & x) && (((1 << i) & ans) == 0)) ans += (1 << i); 
            }
        }

        cout << ans << '\n';
    }

    return 0;
}