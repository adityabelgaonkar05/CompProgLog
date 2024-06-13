#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

bool beat(int time, int h, map<int, int> &mp)
{
    int damage = 0;
    for(auto i : mp)
    {
        if(i.second >= 200000) return 1;
        damage += (i.second * (1 + time/i.first));
        // cout << i.second << ' ' << 1 + time/i.first << '\n';
        if(damage >= 200000 || damage >= h) return 1;
    }

    // cout << damage << '\n';

    return 0;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int h, n; cin >> h >> n;
        vector<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        map<int, int> mp;
        for(int i = 0; i < n; ++i)
        {
            mp[b[i]] += a[i];
        }

        // for(auto i : mp) cout << i.first << ' ' << i.second << ' ';

        int start = 0, end = 8 * 10000000000, mid = 0;
        int smallestsofar = 1e18;

        while(start < end)
        {
            mid = start + (end - start)/2;
            // cout << mid << '\n';
            
            if(beat(mid, h, mp)) 
            {
                smallestsofar = min(smallestsofar, mid);
                end = mid;
            }

            else 
            {
                start = mid + 1;
            }
        }

        cout << smallestsofar + 1 << '\n';
    }

    return 0;
}