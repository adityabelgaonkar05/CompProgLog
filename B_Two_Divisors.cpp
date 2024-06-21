#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

is_prime(int n)
{
    for(int i = 2; i * i <= n; ++i)
    {
        if(n%i == 0) return 0;
    }

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        if(min(a, b) == 1 || min(a, b) == 2) cout << 2 * max(a, b) << '\n';
        if(max(a, b) % min(a, b) == 0) 2 * max(a, b);
    }

    return 0;
}