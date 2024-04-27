#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int b, a; cin >> a >> b;
        int ans = a ^ b;
        cout << ans << endl;
    }

    return 0;
}