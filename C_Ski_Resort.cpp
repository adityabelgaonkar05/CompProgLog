#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

sum_of_nterms(int n)
{
    return (n * (n + 1) / 2);
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k, q, el; cin >> n >> k >> q;
        vector<vector<int>> a;
        vector<int> temp;
        
        for(int i = 0; i < n; ++i) 
        {
            cin >> el;
            if(el <= q) temp.push_back(el);
            else 
            {
                if(temp.size()) a.push_back(temp);
                temp.clear();
            }
        }   

        if(temp.size()) a.push_back(temp);

        int ans = 0;

        for(auto i : a)
        {
            if(i.size() >= k) ans += sum_of_nterms(i.size() - k + 1);
        }

        cout << ans << '\n';
    }

    return 0;
}