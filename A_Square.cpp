#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == c) cout << (b-d)*(b-d) << endl;
        else cout << (a-c)*(a-c) << endl;
        cin >> a >> b >> c >> d;
    }

    return 0;
}