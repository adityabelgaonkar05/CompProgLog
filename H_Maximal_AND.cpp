#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;

        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int ans = 0;
        for(int i = 30; i >= 0; --i)
        {
            int c = 0;

            for(auto x : a)
            {
                if(x & 1<<i) c++;
            }
            
            c = n - c;
            if(c <= k) ans += 1<<i, k -= c;
        }

        cout << ans << "\n";
    }

    return 0;
}