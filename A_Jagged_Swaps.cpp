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
        
        a[0] != *min_element(a.begin(), a.end()) ? cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}