#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector<string> a(n);

        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i += m)
        {
            for(int j = 0; j < n; j += m) cout << a[i][j];
            cout << '\n';
        }
    }

    return 0;
}
