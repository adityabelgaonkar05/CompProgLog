#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        
        for(int i = 1; i <= n/2; ++i)
        {
            cout << n+1-i << ' ' << i << ' ';
        }

        if(n & 1) cout << n/2 + 1;

        cout << '\n';
    }

    return 0;
}