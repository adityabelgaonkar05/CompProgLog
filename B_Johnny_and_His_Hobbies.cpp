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
        vector<int> a(n);
        
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        for(int i = 1; i < 1024; ++i)
        {
            vector<int> b;
            for(auto x : a)
            {
                b.push_back(i ^ x);
            }

            sort(b.begin(), b.end());
            if(a == b) {cout << i << "\n"; break;}
            if(i == 1023) cout << -1 << "\n";
        }
    }

    return 0;
}