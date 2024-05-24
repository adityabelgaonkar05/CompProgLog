#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n; cin >> n;
    string s; cin >> s;

    int pop = 0;
    for(auto i : s)
    {
        if(i == '0') pop++;
        else break;
    }

    reverse(s.begin(), s.end());

    while(pop--) s.pop_back();

    reverse(s.begin(), s.end());

    map<int, int> mp;
    bool flag = 0;
    int gap = 0;

    for(int i = 1; i < s.size(); ++i) 
    {
        if(s[i] == '0') gap++;
        else 
        {
            mp[gap]++;
            gap = 0;
        }
    }

    if(mp.size() == 1) cout << "YES" << "\n";
    else cout << "NO"  <<"\n";

    return 0;
}