#include<bits/stdc++.h>
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
        int countt = 0;
        int coins = 0;
        for(auto i : s) 
        {
            if(i == '@') coins++;
            if(i == '*') countt++;
            else countt = 0;
            if(countt > 1) break;
        }
        
        cout << coins << "\n";
    }

    return 0;
}