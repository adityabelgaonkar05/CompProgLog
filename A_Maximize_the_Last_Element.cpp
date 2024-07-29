#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto & i : a) cin >> i;

        int largest = a[0];
        for(int i = 0; i < n; i += 2)
        {
            largest = max(largest, a[i]);
        }

        cout << largest << '\n';
    }

    return 0;
}