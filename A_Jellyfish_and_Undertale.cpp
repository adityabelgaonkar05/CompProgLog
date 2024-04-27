#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, n; cin >> a >> b >> n;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        int total = b-1;
        for(auto i : v)
        {
            total += min(i, a-1);
        }

        cout << total+1 << "\n";
    }

    return 0;
}