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
        string s; cin >> s;

        int currcount = count(s.begin(), s.begin() + k, 'W');
        int ans = currcount;

        for(int i = k; i < n; ++i)
        {
            if(s[i] == 'W') currcount++;
            if(s[i - k] == 'W') currcount--;

            ans = min(ans, currcount);
        }

        cout << ans << '\n';
    }

    return 0;
}