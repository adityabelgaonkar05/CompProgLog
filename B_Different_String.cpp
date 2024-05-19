#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        map<char, int> mp;
        for(auto i : s) mp[i]++;
        if(mp[s[0]] == s.size() || s.size() == 1) cout << "NO" << "\n";
        else 
        {
            cout << "YES" << "\n";
            char t = s[s.size()-1];
            s.pop_back();
            s = t + s;
            cout << s << '\n';
        }
    }

    return 0;
}