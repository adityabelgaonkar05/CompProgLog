#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, f, k; cin >> n >> f >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        int search = a[f-1];

        sort(a.rbegin(), a.rend());
        bool flagm = 0;
        if(k<n)
        {
            if(a[k] < search) cout << "YES" << "\n";
            else if(a[k] > search) cout << "NO" << "\n";
            else
            {
                if(a[k-1] == a[k]) cout << "MAYBE" << "\n";
                else cout << "NO" << "\n";
            }
        }

        else cout << "YES" << "\n";

        // vector<int> b(a.begin() + k, a.end());
        // map<int, int> mp;
        // for(auto i : b) mp[i]++;
        
    }

    return 0;
}