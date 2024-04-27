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
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        int maxel = *max_element(a.begin(), a.end());
        vector<int> rest, maxi; 
        for(auto i : a) 
        {
            if(i != maxel) rest.push_back(i);
            else maxi.push_back(i);
        }

        if(rest.size() == 0 || maxi.size() == 0) cout << -1 << "\n";

        else
        {
            cout << rest.size() << " " << maxi.size() << "\n";
            for(auto i : rest) cout << i << ' ';
            cout << "\n";
            for(auto i : maxi) cout << i << ' ';
            cout << "\n";
        }   
    }

    return 0;
}