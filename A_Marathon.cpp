#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int negpos = 0;
        if(a > b) negpos++;
        if(a > c) negpos++;
        if(a > d) negpos++;

        cout << 3-negpos << endl;
    }

    return 0;
}