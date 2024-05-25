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

        int flag = 0;

        for(int i = 1; i < n; ++i)
        {
            if(a[i] < a[i-1]) flag = i;
        }

        vector<int> newarr;

        for(int i = flag; i < n; ++i)
        {
            newarr.push_back(a[i]);
        }

        for(int i = 0; i < flag; ++i)
        {
            newarr.push_back(a[i]);
        }

        if(is_sorted(newarr.begin(), newarr.end())) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }

    return 0;
}