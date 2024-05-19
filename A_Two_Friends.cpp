#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i < n+1; ++i) cin >> a[i];
        int minlen = 100000;
        for(int i = 1; i < n+1; ++i)
        {
            vector<int> v;
            int j = i;
            while(find(v.begin(), v.end(), a[j]) == v.end())
            {
                v.push_back(a[j]);
                j = a[j];
            }

            minlen = min( 0ll + v.size(), minlen);
        }

        cout << min(3ll ,minlen) << "\n";
    }

    return 0;
}