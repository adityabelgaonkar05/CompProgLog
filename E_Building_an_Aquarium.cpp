#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int valid_or_not(map<int, int> &mp, int h)
{
    int total = 0;
    for(auto i : mp) total += max(0ll, (h - i.first) * i.second);
    return total;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        map<int, int> mp;
        int el, smallest = INT_MAX;
        for(int i = 0; i < n; ++i) 
        {
            cin >> el;
            mp[el]++;
            smallest = min(el, smallest);
        }
        
        int start = 0, end = smallest + x, mid, total, maxposs = 0;

        while(start <= end)
        {
            mid = start + (end - start) / 2;
            total = valid_or_not(mp, mid);
            if(total > x) end = mid - 1;
            else if(total == x) {maxposs = mid; break;}
            else if(total < x) {start = mid + 1; maxposs = mid;}
        }

        cout << maxposs << '\n';
    }

    return 0;
}