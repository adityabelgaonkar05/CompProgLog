#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, f, a, b; cin >> n >> f >> a >> b;
        vector<int> v(n+1);
        v[0] = 0;
        for(int i = 1; i <= n; ++i) cin >> v[i];

        for(int i = 1; i <= n; ++i)
        {
            f -= min(a * (v[i] - v[i - 1]), b);
        }
        
        f > 0 ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}