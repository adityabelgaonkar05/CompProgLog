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
        vector<int> a(n + 1);
        for(int i = 1; i <= n; ++i) cin >> a[i];
        a[0] = 0;
        for(int i = 1; i <= n; ++i) a[i] += a[i - 1];
        int ans = 0;
        vector<int> factors = {1};

        for(int i = 2; i * i <= n; ++i)
        {
            if(n % i == 0) {factors.push_back(i); factors.push_back(n/i);}
        }

        // for(int i : a) cout << i << ' ';

        for(int i : factors)
        {
            int maxel = 0;
            int minel = 1e15;
            // cout << i << ' ';
            
            for(int j = 0; j <= n - i; j += i)
            {
                maxel = max(maxel, a[j + i] - a[j]);
                minel = min(minel, a[j + i] - a[j]);
            }

            // cout << maxel << ' ' << minel << '\n';

            ans = max(ans, abs(maxel - minel));
        }

        cout << ans << '\n';
    }

    return 0;
}