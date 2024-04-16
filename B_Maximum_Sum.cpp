#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
#define f0n for(int i = 0; i < n; ++i)
#define pow109 1000000007
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        f0n cin >> a[i];

        int ind = max_element(a.begin(), a.end()) - a.begin();
        int biggest = a[ind]%pow109;
        int secondbiggest = INT64_MIN;
        int sum = 0;

        for(int i = 0; i < n; ++i)
        {
            if(i != ind) secondbiggest = max(secondbiggest, a[i]);
            sum += a[i];
        }

        sum%=pow109;

        if(secondbiggest + biggest > 0) 
        {
            for(int i = 0; i < k; ++i)
            {
                sum += secondbiggest%pow109 + biggest%pow109;
                int temp = biggest%pow109;
                biggest += secondbiggest%pow109;
                secondbiggest = temp%pow109;
            }
        }

        cout << sum%pow109 << endl;
    }

    return 0;
}