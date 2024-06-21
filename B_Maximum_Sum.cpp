#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int kadanes(vector<int> &a)
{
    int maxsofar = INT_MIN;
    int currsum = 0;

    for(int i : a)
    {
        currsum = max(0ll, currsum + i);
        maxsofar = max(currsum, maxsofar);
    }

    return maxsofar;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int ans = 0;

        cout << kadanes(a) << '\n';
    }

    return 0;
}