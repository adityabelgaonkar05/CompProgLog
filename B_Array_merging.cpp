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

        map<int, int> maxa;
        map<int, int> maxb;
        int currcount = 1;

        for(int i = 0; i < n - 1; ++i)
        {
            if(a[i] == a[i + 1]) currcount++;
            else currcount = 1; 

            maxa[a[i]] = max(maxa[a[i]], currcount);
        }

        if(a[n-1] != a[n-2]) currcount = 1;

        maxa[a[n-1]] = max(maxa[a[n-1]], currcount);

        currcount = 1;

        for(int i = 0; i < n - 1; ++i)
        {
            if(b[i] == b[i + 1]) currcount++;
            else currcount = 1; 

            maxb[b[i]] = max(maxb[b[i]], currcount);
        }

        if(b[n-1] != b[n-2]) currcount = 1;

        maxb[b[n-1]] = max(maxb[b[n-1]], currcount);

        int ans = 0;

        for(auto i : maxa)
        {
            ans = max(maxb[i.first] + i.second, ans);
        }

        cout << ans << '\n';
    }

    return 0;
}