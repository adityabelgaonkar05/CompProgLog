#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        if(n != k && k != 1) cout << -1 << endl;
        else
        {
            if(n == k) while(n--) cout << 1 << " ";
            else for(int i = 1; i <= n; ++i) cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}