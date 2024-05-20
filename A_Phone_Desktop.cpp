#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t; 
    while(t--)
    {
        int x, y; cin >> x >> y;
        int screens = (y+1)/2;
        int m = y%2;
        // cout << m << " ";
        if(7*screens + 4*m < x)
        {
            x-=(7*screens + 4*m);
            if(x%15) x += (15-x%15);
            // cout << x << " ";
            screens+=x/15;
        }

        cout << screens << "\n";
    }

    return 0;
}