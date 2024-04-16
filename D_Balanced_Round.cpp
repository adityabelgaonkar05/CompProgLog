#include <bits/stdc++.h>
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
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());
        int count = 0;
        int longest = 0;

        for(int i = 1; i < n; ++i)
        {
            if(a[i] - a[i-1] > k) count = 0;

            else 
            {
                count++;
                longest = max(longest, count);
            }
        }

        cout << n - longest - 1 << endl;
    }

    return 0;
}