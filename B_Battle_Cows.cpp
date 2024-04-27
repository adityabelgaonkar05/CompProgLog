#include <bits/stdc++.h>
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
        swap(a[k-1], a[0]);
        int wins = 0;
        for(int i = 1; i < n; ++i)
        {
            if(a[0] >= a[i]) wins++;
            else break;
        }
        swap(a[k-1], a[0]);
        int wins2 = 0;
        int ind = max_element(a.begin(), a.end()) - a.begin()
        
        swap(a[k-1], a[ind]);

        bool cond = true;

        for(int i = k-2; i < n && cond; ++i)
        {
            if(a[k-1] >= a[i] && i != k-1) wins2++;
            else break;
        }

        cout << max(wins, wins2) << endl;
    }

    return 0;
}