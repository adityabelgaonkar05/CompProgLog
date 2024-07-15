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
        int n, k; cin >> n >> k;
        vector<int> a(k);
        for(auto &i : a) cin >> i;

        int maxpos = max_element(a.begin(), a.end()) - a.begin();
        int maxel = a[maxpos];

        int ans = 0;
        for(int i = 0; i < k; ++i)
        {
            if(i != maxpos)
            {
                ans +=  2 * a[i] - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}