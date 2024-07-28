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
        int ans = 0;
        if(k) ans++;
        k -= n;
        n--;

        while(k > 0)
        {
            ans++;
            k -= n;
            if(k > 0)
            {
                k -= n;
                ans++;
            }

            n--;
        }

        cout << ans << '\n';
    }

    return 0;
}