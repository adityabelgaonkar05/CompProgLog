#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;

        if(a == b) cout << c << '\n';
        else if(a == c) cout << b <<  '\n';
        else cout << a << '\n'; 
    }

    return 0;
}