#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // int t; cin >> t;
    // while(t--)
    // {
        
    // }

    string s; cin >> s;
    int inconsistencies = 0;

    for(int i = 0; i < s.size()/2; ++i)
    {
        if(s[i] != s[s.size() - 1 - i]) {inconsistencies++; s[i] = s[s.size() - 1 - i];}
    }

    if(inconsistencies == 0 && ((s.size() % 2) == 1)) cout << "YES";
    else if(inconsistencies == 0 &&  ((s.size() % 2) == 0)) cout << "NO";

    else if(inconsistencies != 1) cout << "NO";

    else cout << "YES";

    return 0;
}