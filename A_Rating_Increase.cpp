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
        string s; cin >> s;
        string s1 = ""; string s2 = ""; s1.push_back(s[0]);
 
        int i = 1, n = s.size();
        for(i = 1; i < n; ++i)
        {
            if(s[i] != '0') {s2.push_back(s[i]); break;}
            s1.push_back(s[i]);
        }

        for(int j = i + 1; j < n; ++j)
        {
            s2.push_back(s[j]);
        }

        // cout << s1 << ' ' << s2 << endl;
        if(!s2.size()) cout << -1 << endl;
        else if(stoi(s1) < stoi(s2)) cout << s1 << ' ' << s2 << endl;
        else cout << -1 << endl;
    }

    return 0;
}