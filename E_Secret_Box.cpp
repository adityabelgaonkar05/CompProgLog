#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--)
    {
        int x, y, z, k;  cin >> x >> y >> z >> k;

        if(k > x * y * z) 
        {
            cout << 0 << '\n';
            continue;
        }
        
        int max_locations = 0;
        
        for(int a = 1; a * a * a <= k; ++a) 
        {
            if(k % a == 0) 
            {
                int k1 = k / a;
                for(int b = 1; b * b <= k1; ++b) 
                {
                    if(k1 % b == 0) 
                    {
                        int c = k1 / b;

                        if(a <= x && b <= y && c <= z) 
                        {
                            max_locations = max(max_locations, (x - a + 1) * (y - b + 1) * (z - c + 1));
                        }
                        if(a <= x && c <= y && b <= z) 
                        {
                            max_locations = max(max_locations, (x - a + 1) * (y - c + 1) * (z - b + 1));
                        }
                        if(b <= x && a <= y && c <= z) 
                        {
                            max_locations = max(max_locations, (x - b + 1) * (y - a + 1) * (z - c + 1));
                        }
                        if(b <= x && c <= y && a <= z) 
                        {
                            max_locations = max(max_locations, (x - b + 1) * (y - c + 1) * (z - a + 1));
                        }
                        if(c <= x && a <= y && b <= z) 
                        {
                            max_locations = max(max_locations, (x - c + 1) * (y - a + 1) * (z - b + 1));
                        }
                        if(c <= x && b <= y && a <= z) 
                        {
                            max_locations = max(max_locations, (x - c + 1) * (y - b + 1) * (z - a + 1));
                        }
                    }
                }
            }
        }

        cout << max_locations << '\n';
    }

    return 0;
}
