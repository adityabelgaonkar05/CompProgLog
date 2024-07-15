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
        vector<int> a(n), b(n);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        vector<int> hasha(2 * n + 1, 0), hashb(2 * n + 1, 0);
        int currcount = 1;

        for(int i = 0; i < n - 1; ++i)
        {
            if(a[i] == a[i + 1]) currcount++;
            else currcount = 1; 

            hasha[a[i]] = max(hasha[a[i]], currcount);
        }

        if(a[n-1] != a[n-2]) currcount = 1;

        hasha[a[n-1]] = max(hasha[a[n-1]], currcount);

        currcount = 1;

        for(int i = 0; i < n - 1; ++i)
        {
            if(b[i] == b[i + 1]) currcount++;
            else currcount = 1; 

            hashb[b[i]] = max(hashb[b[i]], currcount);
        }

        if(b[n-1] != b[n-2]) currcount = 1;

        hashb[b[n-1]] = max(hashb[b[n-1]], currcount);

        int ans = 0;

        for(int i : a) ans = max(ans, hasha[i] + hashb[i]);
        for(int i : b) ans = max(ans, hashb[i] + hasha[i]);

        cout << ans << '\n';
    }

    return 0;
}