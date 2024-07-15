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
        if(n > k)
        {
            int ans = 0;
            vector<int> a = {n};
            for(int i = 0; i < a.size(); ++i)
            {
                if(a[i] > 1)
                {
                    ans++;
                    a.push_back(max(1ll, a[i] - k + 1));
                }
            }

            cout << ans << '\n';
        }

        else if(n > 1) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}