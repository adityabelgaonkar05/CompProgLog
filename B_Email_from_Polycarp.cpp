#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n; cin >> n;
    vector<pair<string, string>> s(n);
    for(int i = 0; i < n; ++i) cin >> s[i].first >> s[i].second;

    map<char, int> mp1, mp2;

    for(auto x : s)
    {
        for(auto y : x.first)
        {
            mp1[y]++;
        }

        for(auto y : x.second)
        {
            mp2[y]++;
        }
    }

    bool check = 1;
    string check1 = "", check2 = "";
    for(auto x : mp1)
    {
        check1.push_back(x.first);
        check1.push_back(x.second);
    }

    for(auto x : mp2)
    {
        check2.push_back(x.first);
        check2.push_back(x.second);
    }

    if(check1 != check2) check = 0;

    if(check = 1)
    {
        cout << "NO" << endl;
        continue;
    }
    
    for(auto x : s)
    {
        bool cond = 1;

        if(x.first.size() > x.second.size() || x.first[0] != x.second[0])
        {
            cout << "NO" << endl;
            cond = 0;
        }

        else if(x.first.size() == x.second.size() && x.first != x.second)
        {
            cout << "NO" << endl;
            cond = 0;
        }

        else if(x.first.size() == x.second.size())
        {
            cout << "YES" << endl;
            cond = 0;
        }

        int c = 1;

        for(int i = 1; i < x.second.size() && cond; ++i)
        {
            if(x.first[c] == x.second[i]) 
            {
                c++;
            }
            
            else if(x.first[c-1] != x.second[i]) 
            {
                cout << "NO" << endl;
                cond = 0;
                break;
            }
        }

        if(cond) cout << "YES" << endl;
    }

    return 0;
}