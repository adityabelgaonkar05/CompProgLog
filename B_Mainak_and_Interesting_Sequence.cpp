#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        if(m < n)
        {
            cout << "No" << "\n";
        }

        else if(m%n == 0)
        {
            cout << "Yes" << "\n";
            for(int i = 0; i < n; ++i)
            {
                cout << m/n << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}