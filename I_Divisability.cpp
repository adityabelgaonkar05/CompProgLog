#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    // int t; cin >> t;
    // while(t--)
    // {

    // }

    int a, b, x; cin >> a >> b >> x;
    if(a > b) swap(a, b);
    if(a > x) a += (a - a%x);
    else if(a < x && x < b) a = x;


    return 0;
}