#include <bits/stdc++.h>
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

        map<char, int> mp;
        int maxfreq = 0;

        for(auto i : s)
        {
            mp[i]++;
            maxfreq = max(maxfreq, mp[i]);
        }

        if(maxfreq > n/2) cout << (2 *maxfreq - n) << "\n";
        else cout << n%2 << "\n";
    }

    return 0;
}