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
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int curr;
        if(n == 1) curr = a[0];
        else if(a[0] < a[1])
        {
            curr = a[0] + x;
        }

        else 
        {
            curr = a[0] - x;
        }
        
        int ans = 0;

        for(int i = 0; i < n; ++i)
        {
            if(abs(curr - a[i]) > x)
            {
                ans++;
                if(i < n-1) 
                {
                    if(a[i] < a[i + 1]) curr = a[1] - x;
                    else curr = a[i + 1] + x;
                }
            }

            // cout << curr << ' ';
        }
        // cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}