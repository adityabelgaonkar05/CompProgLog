#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

vector<int> maxindices(vector<int> a)
{
    vector<int> maxind;

    for(int j = 0; j < 3; ++j)
    {
        int maxel = -1;
        int toappend = 0;
        for(int i = 0; i < a.size(); ++i)
        {
            if(find(maxind.begin(), maxind.end(), i) == maxind.end())
            {
                if(maxel < a[i])
                {
                    maxel = a[i];
                    toappend = i;
                }
            }
        }

        maxind.push_back(toappend);
    }

    return maxind;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n), b(n), c(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        for(auto &i : c) cin >> i;

        int ans = 0;

        vector<int> a1 = maxindices(a);
        vector<int> b1 = maxindices(b);
        vector<int> c1 = maxindices(c);

        for(int i : a1)
        {
            for(int j : b1)
            {
                for(int k : c1)
                {
                    if(i != j && i != k && j != k)
                    {
                        ans = max(ans, a[i] + b[j] + c[k]);
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}