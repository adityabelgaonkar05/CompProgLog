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
        int n, q; cin >> n >> q;
        vector<int> a(n);
        vector<int> x(q);

        for(auto &i : a) cin >> i;
        for(auto &i : x) cin >> i;

        vector<int> newx;
        int currsmallest = INT_MAX;

        for(int i : x) 
        {
            if(i < currsmallest)
            {
                newx.push_back(i);
                currsmallest = i;
            }
        }

        for(int i : newx)
        {
            for(int j = 0; j < n; ++j)
            {
                if((a[j] % (1 << i)) == 0)
                {
                    a[j] += (1 << (i - 1));
                }
            }
        }

        for(int i : a) cout << i << ' ';
        cout << '\n';
    }

    return 0;
}