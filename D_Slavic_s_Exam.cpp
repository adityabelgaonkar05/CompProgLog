#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        string s, news; cin >> s >> news;
        int j = 0;
        int n = s.size();
        int m = news.size();
        map<char, int> mp;

        for(int i = 0; i < n && j < m; ++i)
        {
            if(s[i] == news[j]) j++;
            else if(s[i] == '?') {s[i] = news[j]; j++;} 
        }

        
        if(j < m) cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(int i = 0; i < n; ++i)
            {
                if(s[i] != '?') cout << s[i];
                else cout << 'a';
            }

            cout << '\n';
        }
    }

    return 0;
}