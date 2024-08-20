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
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        int damagel = k/2 + (k & 1);
        int damager = k/2;

        vector<int> b = a;

        for(int i = 1; i < n; ++i)
        {
            a[i] += a[i - 1];
        }

        for(int i = n - 2; i >= 0; --i)
        {
            b[i] += b[i + 1];
        }

        // for(int i : a) cout << i << ' '; cout << '\n';
        // for(int i : b) cout << i << ' '; cout << '\n';

        int leftp = n-1;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] > damagel) {leftp = i; break;}
            else if(a[i] == damagel && i != n-1) {leftp = i + 1; break;}
        }

        int rightp = 0;
        for(int i = n - 1; i >= 0; --i)
        {
            if(b[i] > damager) {rightp = i; break;}
            else if(b[i] == damager && i != 0) {rightp = i - 1; break;}
        }
        
        // cout << rightp << ' ' << leftp << '\n';

        if(leftp > rightp) cout << n << '\n';
        else if(leftp < rightp) cout << n - (rightp - leftp + 1) << '\n';
        else
        {
            
            if(a[n - 1] > k) cout << n - 1 << '\n';
            else cout << n << '\n';
        }

        // cout << '\n';
    }

    return 0;
}