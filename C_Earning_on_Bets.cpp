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

        int sumofa = accumulate(a.begin(), a.end(), 0);
        if(1/n > n)
        {
            int mult = 1;
            for(auto i : a) mult*=i;

            vector<int> b; 
            for(auto i : a) b.push_back(mult/i);

            int sumofb = accumulate(b.begin(), b.end(), 0);
            bool flag = 0;

            for(int i = 0; i < n; ++i)
            {
                if(a[i] * b[i] <= sumofb) {flag = 1; break;}
            }

            if(flag) cout << -1;
            else for(int i : b) cout << i << " ";
            cout << "\n";
        } 

        else cout << -1 << "\n";
    }

    return 0;
}