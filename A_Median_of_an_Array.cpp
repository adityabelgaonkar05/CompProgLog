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
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        int mid;
        n%2 ? mid = a[n/2 + 1] : mid = a[n/2];
        int fo;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == mid)
            {
                fo = i;
                break;
            }
        }

        cout << n/2 - fo << endl;
    }

    return 0;
}