#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int calcval(vector<int> a)
{
    int val = 0;
    int i = 0;

    for(auto x : a)
    {
        val += x * pow(2, i); 
    }

    return val;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;

        int closestsetbit = 0;

        for(int i = 31; i >= 0; --i)
        {
            if(1<<i & x)
            {
                closestsetbit = i;
                break;
            }
        }

        if(pow(2, closestsetbit) == x)
        {
            cout << closestsetbit << "\n";
            for(int i = 0; i < closestsetbit; ++i) cout << 0 << " ";
            cout << 1 << "\n";
        } 

        else
        {
            bool flag = 1;
            vector<int> ans(32, 0)
            
            for(int i = closestsetbit; i < 32; ++i)
            {
                int temp = x;
                temp -= 
            }
            
            cout << 32 << "\n";
            for(auto i : ans) cout << i << " ";
            cout << "\n";
        }
    }

    return 0;
}