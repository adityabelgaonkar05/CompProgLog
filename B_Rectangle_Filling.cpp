#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int r, c; cin >> r >> c;
        vector<string> s(r);
        for(auto &i : s) cin >> i;


        bool flagleft = 0, flagright = 0, flagbottom = 0;
        //for black
        bool flagtop = find(s[0].begin(), s[0].end(), 'B') != s[0].end();
        flagbottom = find(s[s.size()-1].begin(), s[s.size()-1].end(), 'B') != s[s.size()-1].end();
        map<char, int> mp;
        for(auto i : s)
        {
            for(auto x : i) mp[x]++;
        }

        for(auto i : s)
        {
            if(i[0] == 'B') flagleft = 1;
            if(i[i.size()-1] == 'B') flagright = 1;
        }

        if(flagleft && flagright && flagbottom && flagtop || mp['B'] == r*c || mp['W'] == r*c) cout << "YES" << endl;
        else 
        {
            //for white
            flagleft = 0, flagright = 0, flagbottom = 0;
            flagtop = find(s[0].begin(), s[0].end(), 'W') != s[0].end();
            flagbottom = find(s[s.size()-1].begin(), s[s.size()-1].end(), 'W') != s[s.size()-1].end();

            for(auto i : s)
            {
                if(i[0] == 'W') flagleft = 1;
                if(i[i.size()-1] == 'W') flagright = 1;
            }

            if(flagleft && flagright && flagbottom && flagtop) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}