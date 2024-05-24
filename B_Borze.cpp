#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    string s, ans = ""; cin >> s;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '.') ans+='0';
        if(s[i] == '-')
        {
            if(s[i+1] == '-') ans += '2';
            else ans += '1';
            ++i;
        }
    }

    cout << ans;

    return 0;
}