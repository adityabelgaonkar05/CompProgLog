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

        for(int i = 1; i < 9; ++i)
        {
            if(s[0] + to_string(i) != s) cout << s[0] << i << "\n";
        }

        for(int i = 'a'; i <= 'h'; ++i)
        {
            if(i != s[0]) cout << (char)i << s[1] << '\n'; 
        }
    }

    return 0;
}