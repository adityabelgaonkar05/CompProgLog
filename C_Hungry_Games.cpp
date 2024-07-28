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
        vector<vector<int>> dp = {{0, 0}};
        int n, x; cin >> n >> x;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; ++i) cin >> i;
        for(int i = 1; i <= n; ++i) a[i] += a[i - 1];

        int left = 0, right = 1;
        int ans = 0;

        while(right <= n)
        {
            if(a[right] - a[right - 1] <= x) ans++;
            if(left != right - 1)
            {
                if(a[right] - a[left] <= )
            } 
        }
    }

    return 0;
}