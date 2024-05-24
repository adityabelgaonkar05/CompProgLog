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
        int ans = 0;
        auto findit = s.find("01");

        if(findit != string::npos)
        {
            int start = findit;
            int end = start + 1;

            while(start > 0)
            {
                if(s[start-1] == '0') start--;
                else break;
            }

            while(end < s.size()) 
            {
                if(s[end+1] == '1') end++;
                else break;
            }

            string before = "", after = "";

            for(int i = 0; i < start; ++i)
            {
                before+=s[i];
            }

            for(int i = end+1; i < s.size(); ++i)
            {
                after+=s[i];
            }

            if(before.size() > 0) ans++;
            if(after.size() > 0) ans++;

            if(before.size() > 1)
            {
                for(int i = 0; i < before.size()-1; ++i)
                {
                    if(before[i] != before[i+1]) ans++;
                }
            }

            if(after.size() > 1)
            {
                for(int i = 0; i < after.size()-1; ++i)
                {
                    if(after[i] != after[i+1]) ans++;
                }
            }

            cout << ans + 1 << "\n";
        }

        else
        {
            set<char> a(s.begin(), s.end());
            if(a.size() == 2) cout << 2 << "\n";
            else cout << 1 << "\n";
        }
    }

    return 0;
}