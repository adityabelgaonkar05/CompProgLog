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
        int n, r, b; cin >> n >> r >> b;
        int nr = ceil(r/(b + 1));
        int c = 0;
        
        for(int p = 0; p < r % (b+1); ++p)
        {
            for(int i = 0; i <= nr; ++i) 
            {
                cout << 'R';
                c++;
            }
            
            cout << 'B';
            c++;
        }

        while(c < n)
        {
            for(int i = 0; i < nr && c < n; ++i) 
            {
                cout << 'R';
                c++;
            }

            if(c < n) 
            {
                cout << 'B';
                c++;
            }
        }
        

        cout << '\n';
    }

    return 0;
}