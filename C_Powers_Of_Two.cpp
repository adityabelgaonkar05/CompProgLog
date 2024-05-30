#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    // int t; cin >> t;
    // while(t--)
    // {

    // }
    int n, k; cin >> n >> k;
    int p = n;
    
    vector<int> a;

    while(n)
    {
        for(int i = 32; i >= 0; --i)
        {
            if((1<<i) & n) 
            {
                a.push_back(1<<i);
                n-=(1<<i);
                break;
            }
        }
    }

    if(a.size() > k || p < k) cout << "NO" << "\n";
    else if(a.size() == k)
    { 
        cout << "YES" << "\n";
        for(auto i : a) cout << i << " ";
    }
    else 
    {
        cout << "YES" << "\n";
        while(a.size() != k)
        {
            for(int i = 0; i < a.size(); ++i)
            {
                while(a[i] > 1 && a.size() < k)
                {
                    a.push_back(a[i]/2);
                    a[i]/=2;
                }   
            }
        }

        for(auto i : a) cout << i << " ";
    }

    return 0;
}