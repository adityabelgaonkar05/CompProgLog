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
        vector<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        int ans = a[0];
        int maxb = b[0];
        int next = 1;

        while(--k)
        {
            if(next == n)
            {
                ans += maxb;
            }
            
            else if(maxb <= a[next])
            {
                maxb = max(maxb, b[next]);
                ans += a[next];
                next++;
            }

            else 
            {
                ans += maxb;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}