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
        int n, k; cin >> n >> k;
        vector<int> a(n), x(n);
        for(auto &i : a) cin >> i;
        for(int i = 0; i < n; ++i) {cin >> x[i]; x[i] = abs(x[i]);}
        
        map<int, int> mp;
        int currtime = 0, currk = k;
        bool state = 0;

        for(int i = 0; i < n; ++i)
        {
            mp[x[i]] += a[i];
        }

        for(auto i : mp) 
        {
            int timeval = (i.second - currk) / k;
            if(i.second - currk > 0 && i.second - currk < k) timeval++;
            if(i.first - currtime <= timeval) {state = 1; break;}

            if(i.second > currk) 
            {
                currtime++;
                i.second -= currk;
                currtime += i.second/k;
                currk = k - i.second%k;
                if(currk == k) currtime++;
            }

            else if(currk == i.second)
            {
                currtime++;
                currk = k;
            }

            else
            {
                currk -= i.second;
            }
        }

        if(state) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}