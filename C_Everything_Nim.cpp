#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, player = 1; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        for(auto i : a) if(i == 1) 
        {
            if(player) player = 0;
            else player = 1;
            cout << player << endl;
        }

        player ? cout << "Alice" << endl :  cout << "BOB" << endl;
    }

    return 0;
}