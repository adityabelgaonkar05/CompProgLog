#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, x; cin >> n >> k >> x;
        int e = n - k;
        if(x > (n*(n+1)/2) || (x < k*(k+1)/2)) cout << "NO" << "\n";
        else if(n*(n+1)/2 - e*(e+1)/2 < x) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}