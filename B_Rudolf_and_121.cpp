#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        for(int i = 1; i < n-1; ++i)
        {
            while(a[i-1] > 0)
            {
                a[i] -= 2;
                a[i-1]--;
            }
        }

        bool flag = 0;

        for(int i : a) 
        {
            if(i != 0) 
            {
                flag = 1;
                break;
            }
        }

        flag ? cout << "NO\n" : cout << "YES\n";
    }

    return 0;
}