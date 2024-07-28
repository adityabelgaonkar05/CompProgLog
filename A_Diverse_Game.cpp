#include <bits/stdc++.h>
#define int long long
#define endl '\n';
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int> (m));
        bool cond = 0;

        for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> a[i][j];
        for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) swap(a[i][j], a[0][0]);
        if(n == 1 && m == 1) cout << -1 << '\n';
        else
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < m; ++j) cout << a[i][j] << ' ';
                cout << '\n';
            }
        }
    }

    return 0;
}