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
        while(k--)
        {
            int maxdiff = 0;
            int ind = -1;
            for(int i = 0; i < n-1; ++i)
            {
                if(maxdiff < abs(a[i] - a[i+1]))
                {
                    ind = i;
                    maxdiff = abs(a[i] - a[i+1]);
                }

                if(maxdiff == abs(a[i] - a[i+1]))
                {
                    if(min(a[i] , a[i+1]) < min(a[ind], a[ind+1]))
                    {
                        ind = i;
                    }
                }
            }

            if(ind != -1)
            {
                if(a[ind] > a[ind+1]) a[ind+1] = a[ind];
                else a[ind] = a[ind+1];
            }
        }

        cout << accumulate(a.begin(), a.end(), 0) << "\n";
    }

    return 0;
}