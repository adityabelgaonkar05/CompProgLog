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
        int a, b, r; cin >> a >> b >> r;
        int ans = INT_MAX;
        int mini;
        
        for(int i = 0; i <= r; ++i)
        {
            if(abs((a ^ i) - (b ^ i)) < ans) mini = i;
            ans = min(abs((a ^ i) - (b ^ i)), ans);
        }

        cout << ans << " " << mini << '\n';
    }

    return 0;
}