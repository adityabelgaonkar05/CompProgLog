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
        map<char, int> a;
        for(auto x : s) a[x]++;
        int count = 0;
        
        for(auto x : a) if(x.second >= (int)x.first-64) count++;
        cout << count << endl;
    }

    return 0;
}