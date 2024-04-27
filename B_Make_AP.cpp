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
        
        int diff1 = a - b;
        int diff2 = a - c;
        int diff3 = b - c;
        bool flag1 = diff1%c;
        bool flag2 = diff2%b;
        bool flag3 = diff3%a;

        if(flag1 && flag2 && flag3) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}