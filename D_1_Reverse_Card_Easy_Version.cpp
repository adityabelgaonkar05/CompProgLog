#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main() 
{
    int t; cin >> t;
    while (t--) 
    {
        int n, m; cin >> n >> m;
        int count = 0;

        for (int a = 1; a <= n; a++) 
        {
            for (int b = 1; b <= m; b++) 
            {
                int g = __gcd(a, b);
                if ((a + b) % (b * g) == 0)
                {
                    ++count;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
