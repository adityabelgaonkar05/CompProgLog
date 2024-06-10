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
        vector<int> pref(a.begin(), a.end());

        for(int i = 1; i < n; ++i)
        {
            pref[i] += pref[i-1];
        }

        if(pref[n-1] >= 0)
        {
            a[0] = abs(a[0]);
            for(int i = 1; i < n; ++i)
            {
                a[i] += a[i-1];
                if(a[i] < 0) a[i] = abs(a[i]);
            }

            cout << a[n-1] << "\n";
        }

        else 
        {
            int lastneg;
            for(int i = n-1; i >= 0; --i)
            {
                if(a[i] < 0) {lastneg = i; break;}
            }

            for(int i = 1; i < n; ++i)
            {
                a[i] += a[i-1];
                if(i == lastneg) a[i] = abs(a[i]);
            }

            cout << abs(a[n-1]) << '\n';
        }
    }

    return 0;
}