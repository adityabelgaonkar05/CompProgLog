#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int count = 0, n, m, k; cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(a[i] + b[j] <= k) count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}