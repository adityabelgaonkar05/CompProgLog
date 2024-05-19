#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--) // 26 + 26 + 2
    {
        int n; cin >> n;
        if(n < 29)
        {
            cout << "aa" << char(n - 2 + 96) << "\n";
        }

        else if(n < 28 + 26)
        {
            n-=26;
            cout << 'a' << char(n - 1 + 96) << 'z' << "\n";
        }

        else
        {
            n-=52;
            cout << char(n + 96) << "zz" << "\n";
        }
    }

    return 0;
}