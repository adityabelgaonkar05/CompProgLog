#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t; cin >> t;
    
    while(t--)
    {
        int x, y, a, b, l; cin >> x >> y >> a >> b >> l;
        
        if(x == y &&  x == 1)
        {
            cout << 1 << endl;
        }
        
        else if(l == 1)
        {
            cout << x*y << endl;
        }
        
        else
        {
            int diffleft = a, diffright = x - a, diffup = b, diffbel = y - b;
            int maxmoves = 0;

            if(diffright/l + diffleft/l == 0 && diffup/l + diffbel/l == 0)
            {
                maxmoves = 0;
            }

            else if(diffup/l + diffbel/l == 0 && diffright/l + diffleft/l != 0)
            {
                maxmoves = diffright/l + diffleft/l + 1;
            }

            if(diffright/l + diffleft/l == 0 && diffup/l + diffbel/l != 0)
            {
                maxmoves = diffup/l + diffbel/l + 1;
            }

            else
            {
                maxmoves = (diffbel/l + diffup/l) * (diffright/l + diffleft/l) + diffright/l + diffleft/l + diffup/l + diffbel/l + 1;
            }

            cout << maxmoves << endl;
        }
    }
}
