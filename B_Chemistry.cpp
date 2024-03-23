#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        map<char, int> mp;

        for(int i = 0; i < n; ++i) mp[s[i]]++;

        int countofodd = 0;

        for(auto x : mp) if(x.second%2) countofodd++;

        if(countofodd <= k+1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}