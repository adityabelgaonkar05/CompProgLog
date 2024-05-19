#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
        int x = n%m ? 1 : 0;
        if(n == 1 || m == 1) cout << "NO" << "\n";
        else if(k >= n - n/m - x) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}