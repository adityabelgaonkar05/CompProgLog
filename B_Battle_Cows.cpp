#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        int mycow = a[k-1];
        int maxwins = 0, curr = 0;

        for(int i = 0; i < n; ++i)
        {   
            if(a[i] > mycow) break;
            else if(i != k-1) maxwins++;
        }

        cout << maxwins << '\n';
    }

    return 0;
}