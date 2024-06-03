#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        map<char, int> mp;
        int n, m; cin >> n >> m;
        string s; cin >> s;

        for(auto i : s) mp[i]++;

        int total = 0;
        if(mp['A'] < m) total+= m-mp['A'];
        if(mp['B'] < m) total+= m-mp['B'];
        if(mp['C'] < m) total+= m-mp['C'];
        if(mp['D'] < m) total+= m-mp['D'];
        if(mp['E'] < m) total+= m-mp['E'];
        if(mp['F'] < m) total+= m-mp['F'];
        if(mp['G'] < m) total+= m-mp['G'];

        cout << total << "\n";
    }

    return 0;
}