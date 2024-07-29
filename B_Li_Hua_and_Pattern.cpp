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
        int n, k; cin >> n >> k;
        vector<vector<int>> a(n, vector<int> (n));

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j) cin >> a[i][j];
        }

        int outofplace = 0;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j) if(a[i][j] != a[n - j - 1][n - i - 1]) outofplace++;
        }

        if(outofplace/2 < k) cout << "NO\n";
        else if(outofplace/2 == k) cout << "YES\n";
        else{
            if((k - outofplace/2) & 1) cout << "NO\n";
            else cout << "YES\n";
        }
    }

    return 0;
}