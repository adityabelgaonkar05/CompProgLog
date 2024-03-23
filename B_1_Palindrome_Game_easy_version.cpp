#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        if(n>3 && n%2)
        {
            if(s.substr(n/2-1, 3) == "101") cout << "ALICE" << endl;
            else cout << "BOB" << endl;
        }

        else cout << "BOB" << endl;
    }

    return 0;
}