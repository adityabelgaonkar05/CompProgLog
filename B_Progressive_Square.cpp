#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, c, d; cin >> n >> c >> d;
        vector<int> inp(n*n);
        for(auto &i : inp) cin >> i;
        vector<vector<int>> a(n, vector<int>(n));
        int curr = *min_element(inp.begin(), inp.end());

        for(int i = 0; i < n; ++i)
        {
            a[i][0] = curr;
            curr += c;
        }

        for(int i = 0; i < n; ++i)
        {
            curr = a[i][0] + d;
            for(int j = 1; j < n; ++j)
            {
                a[i][j] = curr;
                curr += d;
            }
        }

        map<int, int> input, self;
        for(auto i : inp) input[i]++;
        for(auto i : a) for(auto x : i) self[x]++;
        
        if(equal(input.begin(), input.end(), self.begin(), self.end())) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}