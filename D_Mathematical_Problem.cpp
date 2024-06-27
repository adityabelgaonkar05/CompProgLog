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
        if(n > 3)
        {
            if(find(s.begin(), s.end(), '0') != s.end()) cout << 0 << '\n';
            else
            {
                int ans = 0;
                for(char i : s) 
                {
                    if(i != '1') ans += (i - '0'); 
                }
                cout << max(ans, 1ll) << '\n';
            }
        }

        else if(n < 3)
        {
            cout << stoi(s) << '\n';
        }

        else
        {

        }
    }

    return 0;
}