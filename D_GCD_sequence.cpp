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
        bool flag = 0;
        int tostore = -1;

        for(int i = 1; i < n-1; ++i)
        {
            if(__gcd(a[i-1], a[i]) > __gcd(a[i], a[i+1])) {flag = 1; tostore = i; break;}
        }

        if(flag)
        {
            vector<int> b, c, d;

            for(int i = 0; i < n; ++i)
            {
                if(i == tostore - 1) 
                {
                    c.push_back(a[i]);
                    d.push_back(a[i]);
                }

                else if(i == tostore)
                {
                    b.push_back(a[i]);
                    d.push_back(a[i]);
                }

                else if(i == tostore + 1)
                {
                    b.push_back(a[i]);
                    c.push_back(a[i]);
                }

                else 
                {
                    c.push_back(a[i]);
                    b.push_back(a[i]);
                    d.push_back(a[i]);
                }
            }

            bool flagb = 0, flagc = 0, flagd = 0;

            for(int i = 1; i < n-2; ++i)
            {
                if(__gcd(b[i-1], b[i]) > __gcd(b[i], b[i+1])) {flagb = 1; break;}
            }

            for(int i = 1; i < n-2; ++i)
            {
                if(__gcd(c[i-1], c[i]) > __gcd(c[i], c[i+1])) {flagc = 1; break;}
            }

            for(int i = 1; i < n-2; ++i)
            {
                if(__gcd(d[i-1], d[i]) > __gcd(d[i], d[i+1])) {flagd = 1; break;}
            }

            if(flagb && flagc && flagd) cout << "NO" << "\n";
            else cout << "YES" << "\n";
        }

        else cout << "YES" << "\n";
    }

    return 0;
}