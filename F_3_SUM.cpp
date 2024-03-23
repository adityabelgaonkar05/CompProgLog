#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        for(int i = 0; i < n; ++i)
        {
            int j = i+1;
            int k = n-1;

            while(j < k)
            {
                if((a[i] + a[j] + a[k]) % 10 == 3) a.push_back()
            }
        }
    }

    return 0;
}