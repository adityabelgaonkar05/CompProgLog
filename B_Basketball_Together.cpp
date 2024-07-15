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
        int n, d; cin >> n >> d;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        sort(a.rbegin(), a.rend());

        int left = 0, right = n - 1;
        int ans = 0;

        while(left <= right)
        {
            // cout << left << ' ' << right << '\n';
            if(a[left] * (right - left + 1) <= d) break;
            if(a[left] < d)
            {
                right -= d/a[left];
                if(left <= right) ans++;
            }

            else if(a[left] == d) 
            {
                if(left < right) right--;
                ans++;
            }

            else ans++;
            left++;
        }

        cout << ans << '\n';
    // }

    return 0;
}