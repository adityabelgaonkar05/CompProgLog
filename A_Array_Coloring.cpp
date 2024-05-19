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
        int odd = 0, even = 0;
        for(auto i : a) i&1 ? odd++ : even++;

        if(odd&1) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}