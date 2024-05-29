#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        if(n < m) cout << "No" << "\n";
        else if((n-m)%2) cout << "No" << "\n";
        else cout << "Yes" << "\n";
    }

    return 0;
}