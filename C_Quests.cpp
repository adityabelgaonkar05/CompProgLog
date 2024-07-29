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
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);
        vector<int> c;
        int maxel = b[0];

        for(auto &i : a) cin >> i;
        for(int i = 1; i < n; ++i) a[i] += a[i - 1];
        for(auto &i : b) cin >> i;
        for(int i = 0; i < n; ++i)
        {
            maxel = max(maxel, b[i]);
            c.push_back(maxel);
        }

        int right = min(k - 1, n - 1);
        int ans = INT_MIN;
        while(right >= 0)
        {
            int temp = a[right];
            if(k > right - 1)
            {
                temp += ((k - right - 1) * c[right]);
            }

            ans = max(ans, temp);
            right--;
        }

        // for(int i : a) cout << i << ' '; cout << '\n';
        // for(int i : c) cout << i << ' '; cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}