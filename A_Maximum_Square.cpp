#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int ans = 0;
        map<int, int> mp;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 1; j <= a[i]; ++j)
            {
                mp[j]++;
            }
        }

        for(auto x : mp)
        {
            if(x.second >= x.first)
            {
                ans = max(ans, x.first);
            }
        }

        cout << ans << endl;
    }

    return 0;
}