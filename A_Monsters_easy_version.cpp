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
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        if(n > 1)
        {
            sort(a.begin(), a.end());
            int ans = a[0] - 1;
            a[0] = 1;
            
            for(int i = 0; i < n - 1; ++i)
            {
                if(a[i + 1] != a[i])
                {
                    ans += a[i + 1] - a[i] - 1;
                    a[i + 1] = a[i] + 1;
                }
            }

            cout << ans << '\n';
        }

        else cout << a[0] - 1 << '\n';
    }

    return 0;
}