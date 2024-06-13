#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        int ans = 0;

        for(auto &i : a) cin >> i;

        int currsum = 0;
        int maxsofar = 0;

        for(auto i : a)
        {
            maxsofar = max(maxsofar, i);
            currsum+=i;
            if(maxsofar == currsum - maxsofar) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}