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
        map<int, int> mp;
        for(auto i : a) mp[i]++;
        int pols = 0;
        for(auto x : mp)
        {
            pols+=x.second/3;
        }

        cout << pols << "\n";
    }

    return 0;
}