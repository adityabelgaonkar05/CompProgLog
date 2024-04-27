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
        vector<pair<int, int>> b;
        for(auto &i : a) 
        {
            cin >> i;
            i%=k;
            if(!i) i = k;
        }

        for(int i = 0; i < n; ++i)
        {
            b.push_back({-a[i], i});
        }

        sort(b.begin(), b.end());
        
        for(auto i : b) cout << i.second + 1 << " ";

        cout << "\n";
    }

    return 0;
}