#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        deque<int> b;
        b.push_back(a[0]);

        for(int i = 1; i < n; ++i) 
        {
            if(b.front() <= a[i]) b.push_back(a[i]);
            else b.push_front(a[i]);
        }

        for(auto i : b) cout << i << ' ';
        cout << '\n';

    }

    return 0;
}