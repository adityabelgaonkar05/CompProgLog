#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

is_prime(int n)
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
    
    int t; cin >> t;
    while(t--)
    {
        int x, y, k; cin >> x >> y >> k;
        while(x != 1 && k > 0)
        {
            x++;
            k--;            
            if(x%y && k >= y - (x%y)) 
            {
                k -= y - (x%y);
                x += y - (x%y);
            }

            else if(x%y)
            {
                x += k;
                k = 0;
            }   

            while(x%y == 0)
            {
                x/=y;
            }
        }

        if(k <= 0)
        {
            cout << x << '\n';
        }

        else
        {
            k %= (y-1);
            x += k;
            while(x % y == 0) x /= y;
            cout << x << '\n';
        }
    }

    return 0;
}