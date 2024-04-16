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
        int tents = a;
        if(b%3 && c < 3-b%3) cout << -1 << endl;
        else
        {
            tents+= b / 3;
            if(b%3) 
            {
                tents++;
                c-=(3-b%3); 
            }

            tents += c/3;
            if(c%3) tents++;
            cout << tents << endl;
        }
    }

    return 0;
}