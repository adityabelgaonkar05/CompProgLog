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
        
        int mindiff = INT_MAX;
        for(int i = n-1; i > 0; --i)
        {
            mindiff = min(mindiff, a[i] - a[i-1]);
        }

        if(mindiff < 0) cout << 0 << "\n";
        else cout << (mindiff+2)/2 << "\n";
    }

    return 0;
}