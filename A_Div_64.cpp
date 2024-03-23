#include<bits/stdc++.h>
#define int long long
using namespace std;

//solved

int32_t main()
{
    string s, news = ""; cin >> s;
    map<char, int> mp;
    bool cond1 = 0;
    bool cond2 = 0;

    if(s.size() < 7)
    {
        cout << "no";
        return 0;
    }

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '1')
        {
            news = s.substr(i, s.size()-i);
            break;
        }
    }

    s = news;
    for(auto x : s) mp[x]++;

    for(auto x : mp)
    {
        if(x.first == '1' && x.second >= 1) cond1 = 1;
        if(x.first == '0' && x.second >= 6) cond2 = 1;
    }

    cond1 && cond2 ? cout << "yes" : cout << "no";

    return 0;
}