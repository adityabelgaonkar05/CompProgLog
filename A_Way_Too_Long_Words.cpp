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
        
        if(s.size() > 10)
        {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}

aditya
aditya

localization
l10n