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
        auto it = find(s.begin(), s.end(), '0');
        if(s[s.size()-1] == '9') cout << "NO\n";
        else if(s[0] != '1') cout << "NO\n";
        else if(it != s.end() && it != s.end()-1) cout << "NO\n";
        else cout << "YES\n"; 
    }

    return 0;
}