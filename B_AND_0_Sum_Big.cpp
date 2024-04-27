#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int MOD = 1e9 + 7;

int power(int n, int k)
{
    int ans = 1;
    for(int i = 0; i < k; ++i)
    {
        ans = (ans * n%MOD)%MOD;
    }

    return ans%MOD;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        cout << power(n, k) << "\n";
    }

    return 0;
}