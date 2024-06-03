#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 1;
        vector<int> a(n);
        vector<int> b(n + 1);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        int p = 0;
        bool flag = 0;
        for(int i = 0; i < n; ++i)
        {
            
            if(abs(a[i] - b[n]) < abs(a[p] - b[n]))
            {
                p = i;
            }

            else if(abs(a[i] - b[n]) == abs(a[p] - b[n]))
            {
                if((b[i] < a[i] and b[n] >= b[i] and b[n] <= a[i]) or (b[i] > a[i] and b[n] <= b[i] and b[n] >= a[i]))
                {
                    p = i;
                    flag 
                }
            }
        }

        ans += abs(a[p] - b[n]) + 1;

        for(int i = 0; i < n; ++i)
        {
            if(i != p) ans += abs(a[i] - b[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}