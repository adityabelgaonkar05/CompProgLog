#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        if(find(a.begin(), a.end(), k) == a.end()) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}