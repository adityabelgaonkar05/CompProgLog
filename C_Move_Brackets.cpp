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
        string s; cin >> s;
        int ans = 0;

        int c = 0;

        for(int i = 0; i < n; ++i)
        {
            if(s[i] == ')') c--;
            else c++;
            if(c < 0) ans = max(ans, abs(c));
        }

        cout << ans << '\n';
    }

    return 0;
}