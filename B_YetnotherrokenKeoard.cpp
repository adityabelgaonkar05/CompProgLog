#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;

        vector<pair<char, int>> caps;
        vector<pair<char, int>> smol;

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] >= 'a' && s[i] != 'b' && s[i] != 'B') smol.push_back({s[i], i});
            else if(s[i] != 'b' && s[i] != 'B') caps.push_back({s[i], i});

            if(s[i] == 'B') 
            {
                if(caps.size())
                {
                    auto it = caps.end();
                    it--;
                    caps.erase(it);
                }
            }

            if(s[i] == 'b')
            {
                if(smol.size())
                {
                    auto it = smol.end();
                    it--;
                    smol.erase(it);
                }
            }
        }

        vector<char> ans(s.size(), '#');
        
        for(auto i : smol) ans[i.second] = i.first;
        for(auto i : caps) ans[i.second] = i.first;

        for(auto i : ans) if(i != '#') cout << i;
        cout << "\n";
    }

    return 0;
}