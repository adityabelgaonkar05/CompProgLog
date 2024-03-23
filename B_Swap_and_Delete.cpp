#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        map<char, int> mp;
        for(auto x : s) mp[x]++;
        int count1 = 0, count0 = 0;
        for(auto x : mp) x.first == '1' ? count1 = x.second : count0 = x.second;
        if(count1 == count0) cout << 0 << endl;
        else if(count1 == 0 || count0 == 0 && s.size() < 3) cout << s.size() << endl;
        else if(s.size()%2) cout << s.size() - 1 << endl;
        else cout << s.size() - 2 << endl;
    }

    return 0;
}