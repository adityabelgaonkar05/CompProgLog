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
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        int ans = 0;
        int left = 2 * k;
        int right = n - 1;
        for(int i = left; i <= right; ++i) ans += a[i];
        int curr = ans;

        while(left > 1)
        {
            left -= 2;
            --right;
            curr += (a[left] + a[left + 1]);
            curr -= a[right + 1];

            ans = max(ans, curr);
        }

        cout << ans << '\n';
    }

    return 0;
}