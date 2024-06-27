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
        for(auto i : s) mp[i]++;

        string ans = "";
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '1' && mp['0']--) 
            {
                ans.push_back('0');
            }

            else if(s[i] == '0' && mp['1']--)
            {
                ans.push_back('1');
            }

            else break;
        }

        cout << s.size() - ans.size() << '\n';
    }

    return 0;
}