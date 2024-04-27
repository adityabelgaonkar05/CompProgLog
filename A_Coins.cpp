#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        if(((n-k)&1) && (n&1)) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}