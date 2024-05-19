#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int diff = a-b;
        if(a == b) cout << 0 << " " << 0 << "\n";
        else if(min(a, b) > diff) cout << diff << " " << diff - a%diff << "\n";
        else cout << diff << " " << diff - min(a, b) << "\n";
    }

    return 0;
}