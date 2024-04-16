#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int diff = 0;
        int traversebacka, traversebackb;
        
        if(n%2 == 0)
        {
            for(int i = 0; i < n/2; ++i)
            {
                
                diff += abs(a[i] - b[m-1-i]);
                diff += abs(a[n-1-i] - b[i]);

                // traversebacka = n-i-1;
                // traversebackb = m-i-1;

                cout << a[i] << " " << b[m-1-i] << endl;
                cout << a[n-i-1] << " " << b[i] << endl;
            }
        }

        else
        {
            for(int i = 0; i <= n/2; ++i)
            {
                if(n-i-1 == i)
                {
                    diff += max(abs(a[i] - b[m-1-i]), a[n-1-i] - b[i]);
                }

                else
                {
                    diff += abs(a[i] - b[m-1-i]);
                    diff += abs(a[n-1-i] - b[i]);
                }

                // traversebacka = n-i-1;
                // traversebackb = m-i-1;

                cout << a[i] << " " << b[m-1-i] << endl;
                cout << a[n-i-1] << " " << b[i] << endl;
            }
        }

        
        
        cout << diff << endl;
    }

    return 0;
}