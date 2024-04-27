#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x, y; cin >> n >> x >> y;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int cntodd = 0;
        for(auto i : a) if(i&1) cntodd++;

        if(cntodd&1)
        {
            if((x&1) == (y&1)) cout << "Bob" << "\n";
            else cout << "Alice" << "\n";
        }

        else
        {
            if((x&1) == (y&1)) cout << "Alice" << "\n";
            else cout << "Bob" << "\n";
        }
    }

    return 0;
}