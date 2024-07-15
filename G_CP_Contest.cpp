#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // int t; cin >> t;
    // while(t--)
    // {
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        int ksum = 0;

        if(k == n) cout << accumulate(a.begin(), a.end(), 0);
        else
        {
            for(int i = 0; i < k; ++i)
            {
                if(b[i] == 0) ksum += a[i];
            }

            int maxksum = ksum;

            for(int i = 1; i <= n - k; ++i)
            {
                if(b[i - 1] == 0) ksum -= a[i - 1];
                if(b[i + k - 1] == 0) ksum += a[i + k - 1];
                maxksum = max(maxksum, ksum);
            }

            int normsum = 0;
            for(int i = 0; i < n; ++i) if(b[i] == 1) normsum += a[i];

            cout << maxksum + normsum << '\n';
        }
    // }   

    return 0;
}