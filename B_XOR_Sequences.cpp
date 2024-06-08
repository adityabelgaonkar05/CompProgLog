#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        int xorxy = x ^ y;

        for(int i = 31; i >= 0; ++i)
        {
            if(xorxy & (1 << i)) {cout << (1<<i) << "\n"; break;}
        }
    }

    return 0;
}