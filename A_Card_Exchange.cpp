#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        map<int, int> mp;
        for(int i = 0; i < n; i++) mp[a[i]]++;
        vector<int> b;
        bool flag = 1;
        for(auto i : mp) if(i.second >= k) flag = 0;
        if(flag) cout << n << endl;
        else 
        {
            cout << k-1 << endl;
        }
    }

    return 0;
}