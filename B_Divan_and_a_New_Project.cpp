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
        vector<int> a(n), ans(n + 1);
        for(auto &i : a) cin >> i;
        int c = 0;

        ans[0] = (n + 1) / 2;
        vector<pair<int, int>> mp;
        for(int i = 0; i < n; ++i) mp.push_back({a[i], i});
        sort(mp.begin(), mp.end());
        int p = n + (1 ^ (n & 1));

        for(int i = 1; i <= n; ++i)
        {
            if(i & 1)
            {
                if(p != ans[0])
                {    
                    ans[mp[i - 1].second + 1] = p;
                    p--;
                }
                else
                {
                    p--;
                    ans[mp[i - 1].second + 1] = p;
                    p--;
                }
            }

            else
            {
                if(n + 1 - p != ans[0])
                {
                    ans[mp[i - 1].second + 1] = c;
                    c++;
                }

                else
                {
                    c++;
                    ans[mp[i - 1].second + 1] = c;
                    c++;
                }
            }
        }

        int sum = 0;
        for(int i = 1; i <= n; ++i)
        {
            sum += 2 * (abs(ans[0] - ans[i]) * a[i - 1]);
        }

        cout << sum << '\n';
        for(int i : ans) cout << i << ' ';
        cout << '\n';
    }

    return 0;
}