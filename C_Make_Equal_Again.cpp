#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto & i : a) cin >> i;

        int longestendl = 1, longestendr = 1;

        for(int i = 1; i < n; ++i)
        {
            if(a[i] == a[i-1]) longestendl++;
            else break;
        }

        for(int i = n-2; i >= 0; --i)
        {
            if(a[i] == a[i+1]) longestendr++;
            else break;
        }

        if(a[0] == a[n-1]) cout << max(0ll, n - longestendl - longestendr) << '\n';
        else cout << n - max(longestendl, longestendr) << '\n';

    }

    return 0;
}