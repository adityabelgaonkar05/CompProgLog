#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

bool is_prime(int n)
{
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0) return 0;
    }

    return 1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // int t; cin >> t;
    // while(t--)
    // {

    // }

    int n; cin >> n;

    if(n < 3) cout << "1\n";
    else cout << "2\n";
    for(int i = 2; i <= n + 1; ++i)
    {
        if(is_prime(i)) cout << 1 << ' ';
        else cout << 2 << ' ';
    }

    return 0;
}