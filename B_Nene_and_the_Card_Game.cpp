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
        int score = 0;
        for(auto i : a) {mp[i]++; if(mp[i] == 2) score++;}
        cout << score << "\n";
    }

    return 0;
}