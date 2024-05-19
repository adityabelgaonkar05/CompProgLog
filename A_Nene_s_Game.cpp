#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int k, q; cin >> k >> q;
        vector<int> a(k);
        for(auto &i : a) cin >> i;
        vector<int> b(q);
        for(auto &i : b) cin >> i;
        
        int minelk = *min_element(a.begin(), a.end());
        for(auto i : b) cout << min(minelk - 1, i) << " ";
        cout << "\n";
    }

    return 0;
}