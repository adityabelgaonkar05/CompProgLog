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

        vector<int> b;

        for(int i = 0; i < n-1; ++i)
        {
            b.push_back(max(a[i], a[i+1]));
        }

        int largestsofar = INT_MAX;

        for(auto i : b)
        {
            largestsofar = min(i, largestsofar);
        }

        cout << largestsofar - 1 << "\n";
    }

    return 0;
}