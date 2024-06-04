#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 1;
        vector<int> a(n);
        vector<int> b(n + 1);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        bool bwn = 0;
        int closest = 0;

        for(int i = 0; i < n; ++i)
        {
            if(abs(a[i] - b[n]) < abs(a[closest] - b[n])) closest = i;
            else if(abs(b[closest] - b[n]) > abs(b[i] - b[n])) closest = i;
            if((a[i] <= b[n] && b[n] <= b[i]) || (a[i] >= b[n] && b[n] >= b[i])) {bwn = 1; break;}
            ans += abs(a[i] - b[i]);
        }

        if(bwn)
        {
            ans = 1;
            for(int i = 0; i < n; ++i)
            {
                ans += abs(a[i] - b[i]);
            }
        }

        else 
        {
            a.push_back(a[closest]);
            ans += abs(a[n] - b[n]);
            if((a[closest] <= b[closest] && b[closest] <= b[n]) || (a[closest] >= b[closest] && b[closest] >= b[n])) ans -= abs(a[closest] - b[closest]);
        }

        cout << ans << "\n";
    }

    return 0;
}