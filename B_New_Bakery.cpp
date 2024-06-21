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
        int n, a, b; cin >> n >> a >> b;
        if(a >= b) cout << n * a << '\n';
        else
        {
            int sum = 0;
            if(b - a <= n) sum = (b * (b + 1) / 2) - (a * (a + 1) / 2) + a * (n - b + a );
            else sum = (b * (b + 1) / 2) - ((b - n) * (b - n + 1) / 2);
            cout << sum << '\n';
        }
    }

    return 0;
}