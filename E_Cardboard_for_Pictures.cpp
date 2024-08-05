#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, c; cin >> n >> c;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int left = 0;
        int right = 1e9;
        int ans = -1;

        while(left < right)
        {
            int mid = left + (right - left) / 2;
            int total = 0;

            for(int i : a)
            {
                total = total + ((i + mid) * (i + mid));
                if(total > c) break;
            }

            if(total == c)
            {
                ans = mid / 2;
                break;
            }

            else if(total < c)
            {
                left = mid + 1;
            }

            else 
            {
                right = mid;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}