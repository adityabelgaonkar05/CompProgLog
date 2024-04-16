#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        map<int, int> mp;
        for(auto i : s) mp[i]++;
        if(mp['1'] % 2 == 0 && s.size() > 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}