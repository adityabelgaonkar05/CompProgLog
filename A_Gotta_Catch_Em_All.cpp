#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    string s; cin >> s;
    map<char, int> mp;

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'B' || s[i] == 'u' || s[i] == 'l' || s[i] == 'b' || s[i] == 'a' || s[i] == 's' || s[i] == 'u' || s[i] == 'r')
        mp[s[i]]++;
    }

    int mnv = INT32_MAX;
    bool cond;
    mp.size() == 7 ? cond = 0 : cond = 1;

    for(auto x : mp)
    {
        if(x.first == 'u' || x.first == 'a')
        {
            if(mnv > x.second/2) mnv = x.second/2;
        }

        else
        {
            if(mnv > x.second) mnv = x.second;
        }
    }

    if(mnv == INT32_MAX || cond) mnv = 0;

    cout << mnv << endl;

    return 0;
}