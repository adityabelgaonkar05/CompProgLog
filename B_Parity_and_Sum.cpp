#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        //sort, split into odd even, two pointer

        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        vector<int> even;
        int maxodd = INT_MIN;

        for(int i : a) 
        {
            if((i & 1) == 0) even.push_back(i);
            else maxodd = max(maxodd, i);
        }

        int ans = 0;
        int i = 0;
        while(i < even.size() && (maxodd != INT_MIN))
        {
            if(maxodd > even[i])
            {
                maxodd += even[i];
                ++ans;
                ++i;
            }

            else
            {
                ans += 2;
                maxodd += (even.back() * 2);
                even.pop_back();
            }
        }

        cout << ans << '\n';
    }

    return 0;
}