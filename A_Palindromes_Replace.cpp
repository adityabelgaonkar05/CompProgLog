#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    string s; cin >> s;
    int n = s.size();
    bool flag = 1;
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == '?')
        {
            if(s[n-i-1] == '?')
            {
                s[i] = 'a';
                s[n-i-1] = 'a';
            }

            else s[i] = s[n-i-1];
        }

        if(s[i] != s[n-i-1] && s[i] != '?' && s[n-i-1] != '?') flag = 0;
    }

    flag ? cout << s << endl : cout << -1 << endl;

    return 0;
}