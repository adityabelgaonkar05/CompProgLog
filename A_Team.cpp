#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n; cin >> n;
    int total = 0;
    while(n--)
    {
        int a, b, c; cin >> a >> b >> c;
        if(a+b+c >= 2)
            total++;
    }

    cout << total << endl;

    return 0;
}