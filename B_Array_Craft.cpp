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
        int n, x, y; cin >> n >> x >> y;
        vector<int> a(n, 1);
        
        if(x == (n - y + 1)) for(int i : a) cout << i << ' ';
        else if(x > (n - y + 1))
        {
            int diff = (x - (n - y + 1));
            for(int i = 0; i < max(1ll, diff/2); ++i) a[i] = -1;
            for(int i : a) cout << i << ' ';
        }
        else 
        {
            int diff = (n - y + 1) - x;
            for(int i = n - 1; i >= n - 1 - diff/2; --i)
            {
                a[i] = -1;
            }

            for(int i : a) cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}