#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{ 
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        int minel = INT_MAX;
        for(auto &i : a) {cin >> i; minel = min(minel, i);}
        map<int, int> mp;
        for(auto i : a) mp[i]++;
        int increases = 0;

        while(k > 0)
        {
            for(auto i : mp) 
            {
                k-=i.second; 
                if(k >= 0) increases++;
                else break;
            }
        }

        minel+=increases;
        // cout << minel << endl;
        int ans = 0;
        if(minel == 0) ans = 0;
        else if(minel == 1) ans = 1;
        int val = 0; if()
        else ans = minel*n + val;

        cout << ans << "\n";
    }

    return 0;
}