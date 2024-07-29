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
        int n; cin >> n;
        vector<int> b(n - 1);
        for(auto &i : b) cin >> i;

        vector<int> a(n);
        a[0] = b[0];
        bool cond = 0;

        for(int i = 1; i < n - 1 && (cond == 0); ++i)
        {
            a[i] = b[i-1] | b[i];
        }

        a[n - 1] = b[n - 2];

        for(int i = 0; i < n - 1; ++i) 
        {
            if(((a[i] & a[i+1])) != b[i]) 
            {
                cond = 1;
                break;
            }
        }

        if(cond) 
        {
            cout << -1 << '\n';
            // for(int i : a) cout << i << ' ';
            // cout << '\n';
        }

        else
        {
            for(int i : a) cout << i << ' ';
            cout << '\n';
        }
    }

    return 0;
}