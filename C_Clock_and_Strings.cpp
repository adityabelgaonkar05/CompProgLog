#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{  
    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        string s = "";
        
        for(int i = 1; i <= 12; ++i)
        {
            if(i == a or i == b) s += 'a';
            if(i == c or i == d) s += 'c';
        }

        if(s == "acac" or s == "caca") cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}