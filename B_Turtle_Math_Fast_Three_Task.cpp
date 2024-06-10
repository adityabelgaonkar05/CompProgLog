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
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            sum += a[i];
        }

        if(sum%3 == 2)
        {
            cout << "1\n";
        }

        else if(sum%3 == 1)
        {
            int flag = 0;

            for(int i = 0; i < n; ++i)
            {
                if(a[i]%3 == 1) {flag = 1; break;}
            }

            if(flag) cout << 1 << '\n';
            else cout << 2 << '\n';
        }

        else cout << 0 << "\n";
    }

    return 0;
}