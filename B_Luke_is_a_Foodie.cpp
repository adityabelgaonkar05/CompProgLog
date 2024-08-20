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
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int smallest = a[0];
        int largest = a[0];
        int ans = 0;
        for(int i = 0; i < n; ++i)
        {
            smallest = min(a[i], smallest);
            largest = max(a[i], largest);
            if(largest - smallest > 2 * x)
            {
                ans++;
                largest = a[i];
                smallest = a[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}