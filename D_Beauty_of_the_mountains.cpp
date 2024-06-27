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
        vector<vector<int>> a(n, vector<int> (m));
        vector<vector<int>> b(n, vector<int> (m));

        for(auto i : a) for(auto &j : i) cin >> j;
        for(auto i : b) for(auto &j : i) cin >> j;

        int sumsnow = 0;
        int sumnot = 0;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(b[i][j] == 0) sumsnow += a[i][j];
                else sumnot += a[i][j];
            }
        }

        if(sumnot == sumsnow) cout << "YES" << '\n';
        else
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < m)
                {
                    
                }
            }
        }
    }

    return 0;
}