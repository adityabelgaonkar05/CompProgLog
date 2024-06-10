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

        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            sum += abs(a[i]);
        }

        cout << sum << "\n";
    }

    return 0;
}