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
        int n, l, r; cin >> n >> l >> r;
        vector<int> a(n + 1, 0);
        for(int i = 1; i <= n; ++i) cin >> a[i];
        
        for(int i = 1; i <= n; ++i) a[i] += a[i - 1];
        
        int currsum = 0;
        int wins = 0;
        int right = 1, left = 0;

        while(left < n)
        {
            currsum = a[right] - a[left];
            if(right < n && currsum < l) right++;
            else if(currsum > r) left++;
            else if(currsum >= l && currsum <= r) {wins++; left = right;}
            else break;
        }

        cout << wins << '\n';
    }

    return 0;
}