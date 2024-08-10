#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, s, m; cin >> n >> s >> m;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i].first >> a[i].second;
        }

        int cond = 0;
        if((a[0].first != 0) || (a[n-1].second != m))
        {
            if(s <= a[0].first) cond = 1;
            else if(s <= (m - a[n-1].second)) cond = 1;
        }

        if(cond) cout << "YES\n";
        else
        {
            for(int i = 0; i < n - 1; ++i)
            {
                if(s <= (a[i + 1].first - a[i].second)) {cond = 1; break;}
            }

            if(cond) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}