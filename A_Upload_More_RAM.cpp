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
        int ans = 0;
        int curr = 0;
        int n, k; cin >> n >> k;

        while(curr < n)
        {
            curr++;
            if(curr == n) ans++;
            else ans += k;
        }

        cout << ans << '\n';
    }

    return 0;
}