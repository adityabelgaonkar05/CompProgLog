#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if(a < b && b < c) cout << "STAIR" << endl;
        else if(a < b && b > c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }

    return 0;
}