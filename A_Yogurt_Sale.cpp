#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, a, b; cin >> n >> a >> b;
        int ans = min(a*n, b*(n/2) + a*(n%2));
        cout << ans << endl;
    }
    
    return 0;
}