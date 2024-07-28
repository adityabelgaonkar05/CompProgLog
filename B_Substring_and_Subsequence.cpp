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
        string s; cin >> s;
        string news; cin >> news;
        map<char, int> mp;
        for(char i : s) mp[i]++;
        int commonind = -1;

        for(int i = 0; i < news.size(); ++i)
        {
            if(mp[news[i]]) {commonind = i; break;}
        }

        if(commonind != -1)
        {
            int sp = find(s.begin(), s.end(), news[commonind]) - s.begin();
            int len = news.size();
            int newsp = commonind;

            while(newsp < news.size() && sp < s.size())
            {
                if(s[sp] == news[newsp])
                {
                    len--;
                    sp++; newsp++;
                }

                else sp++;
            }
            // cout << commonind << '\n';
            cout << len + s.size() << '\n';
        }   

        else
        {
            cout << s.size() + news.size() << '\n';
        }     
    }

    return 0;
}