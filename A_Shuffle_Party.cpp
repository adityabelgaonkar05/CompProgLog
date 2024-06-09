#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int p2;

        for(int i = 31; i >= 0; --i)
        {
            if((1<<i) & n)
            {
                cout << (1<<i) << "\n";
                break;
            }
        }
    }

    return 0;
}