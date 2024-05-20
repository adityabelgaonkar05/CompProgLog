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
        for(auto &i : a) cin >> i;
        bool cond = 0;
        int maxel = 0;
        for(auto i : a)
        {
            if(i < maxel) cond = 1;
            maxel = max(i , maxel);
        }

        if(cond) cout << maxel*2 << "\n";
        else cout << max(maxel, n) << "\n";
    }

    return 0;
}