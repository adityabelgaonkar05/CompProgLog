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
        bool cond = 0;
        string s, news; cin >> s >> news;
        int first0 = 5000000, first1 = 5000000;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0') first0 = min(first0, i);
            if(s[i] == '1') first1 = min(first1, i);
            if(s[i] != news[i])
            {
                if(s[i] == '0')
                {
                    if(first1 > i) {cond = 1; break;} 
                }
            }
        }

        if(cond) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}