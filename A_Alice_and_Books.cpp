#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);

        for(auto &i : a) cin >> i;
        int maxpos = max_element(a.begin(), a.end()) - a.begin();
        int secondmax = INT_MIN;
        for(int i = 0; i < n; ++i)
        {
            if(i != maxpos) secondmax = max(secondmax, a[i]);
        }

        if(maxpos != n-1) cout << a[maxpos] + a[n-1] << '\n';
        else cout << secondmax + a[n-1] << '\n';
    }

    return 0;
}