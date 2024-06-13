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
        for(auto &i : a) cin >> i;

        bool flag = 0;

        for(int i = 1; i < n; i+=2)
        {
            a[i] = -1 * a[i];
        }

        map<int, int> mp;
        mp[a[0]]++;

        for(int i = 1; i < n; ++i)
        {
            a[i] += a[i-1];
            mp[a[i]]++;
            if(mp[a[i]] > 1) {flag = 1; break;}
        }

        if(mp[0]) flag = 1;

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}