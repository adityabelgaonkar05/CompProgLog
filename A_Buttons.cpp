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
        (a+b+c)%2 == 0 ? cout << "Second" << "\n" : cout << "First" << "\n";
    }

    return 0;
}