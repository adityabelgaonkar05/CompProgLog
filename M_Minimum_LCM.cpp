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
        if(n & 1) 
        {
            int ans = 1;
            for(int i = 2; i * i <= n; i++)
            {
                if(n % i == 0)
                {
                    ans = n / i;
                    break;
                }
            }

            cout << ans << ' ' << n - ans << '\n';
        }

        else
        {
            cout << n/2 << ' ' << n/2 << '\n';
        }
    }

    return 0;
}