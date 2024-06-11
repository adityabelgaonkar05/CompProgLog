#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        string s1;

        for(int i = 0; i < n; ++i)
        {
            if(s[i] == 'a' or s[i] == 'e') s1.push_back('v');
            else s1.push_back('c');
        }

        string ans;

        for(int i = 0; i < n; ++i)
        {
            ans.push_back(s[i]);
            ans.push_back(' ');
        }

        for(int i = 0; i < n-1; ++i)
        {
            if(s1[i] == 'c' and s1[i + 1] == 'c') {ans[2*i + 1] = '.'; ++i;}
        }

        for(int i = 0; i < n-3; ++i)
        {
            if(s1[i] == 'c' and s1[i + 1] == 'v' and s1[i + 2] == 'c' and s1[i + 3] == 'v') {ans[2*i + 3] = '.'; i++;}
        }

        for(auto i : ans) if(i != ' ') cout << i;
        cout << '\n';
    }

    return 0;
}