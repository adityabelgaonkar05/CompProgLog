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
        string a, b; cin >> a >> b;

        int max = 0;
        int left = 0;

        for(auto x : b)
        {
            if(x == a[left]) 
            {
                max++;
                left++;
            }
        }

        cout << max << "\n";
    }

    return 0;
}