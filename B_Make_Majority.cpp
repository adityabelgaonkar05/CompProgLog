#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        string ans;
        ans.push_back(s[0]);

        for(int i = 1; i < n; ++i)
        {
            if(s[i] == '0' && ans.back() != '0')
            {
                ans.push_back(s[i]);
            }

            else if(s[i] == '1') ans.push_back(s[i]);
        }

        map<int, int> mp;
        for(char i : ans) mp[i]++;

        if(mp['1'] > mp['0']) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}