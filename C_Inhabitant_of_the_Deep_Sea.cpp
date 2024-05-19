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
        for(auto & i : a) cin >> i;
        // vector<int> b(a.begin(), a.end());

        a[0] -= (k/2 + k%2);
        for(int i = 1; i < n; ++i)
        {
            a[i] += a[i-1];
        }

        for(auto i : a) cout << i << " ";
        cout << endl;
        a[n-1] -= k/2;
        for(int i = n-2; i >= 0; --i)
        {
            a[i] += a[i+1];
        }

        for(auto i : a) cout << i << " ";
        cout << endl;

        int r = 0;
        for(int i = n-1; i >= 0; --i)
        {
            if(a[i] <= 0) r++;
            else break;
        }

        int l = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] <= 0) l++;
            else break;
        }

        if(l + r >= n) cout << n << "\n";
        else cout << l + r << "\n";
        cout << l << " " << r << endl;
    }

    return 0;
}