#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << "\n";
    } 

    return 0;
}