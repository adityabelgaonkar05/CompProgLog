#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
        
        for(int i = n; i >= m + 1; --i)
        {
            cout << i << " ";
        }

        for(int i = 1; i <= m; ++i) cout << i << " ";
        
        cout << '\n';
    }

    return 0;
}
