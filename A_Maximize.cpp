#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        int maxgcd = 0;
        int y = 0;
        for(int i = 1; i < x; ++i)
        {
            if(maxgcd < __gcd(x, i) + i) 
            {
                maxgcd = __gcd(x, i) + i;
                y = i;
            }
        }

        cout << y << "\n";
    }

    return 0;
}