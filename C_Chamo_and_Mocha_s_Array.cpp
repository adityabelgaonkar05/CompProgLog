#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int median(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[1];
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 0;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        for(int i = 0; i < n-1; ++i)
        {
            ans = max(ans, min(a[i], a[i+1]));
        }

        for(int i = 0; i < n-2; ++i)
        {
            ans = max(ans, median({a[i], a[i+1], a[i+2]}));
        }

        cout << ans << "\n";
    }

    return 0;
}