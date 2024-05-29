#include<bits/stdc++.h>
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
        for(int i = 0; i < n-1; ++i)
        {
            if((i+1)&i && a[i] > a[i+1]) flag = 1;
        }

        if(flag) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }

    return 0;
}