#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int c = 0; int ans = 0; int n;

int takefor(int o)
{
    string s = "";
    int curr = 0;
    while(s != "end" && c < n && ans < 4294967296)
    {
        cin >> s;
        c++;
        if(s == "end") {return o * curr;}
        else if(s == "add")
        {
            curr++;
            if(o * curr >= 4294967296 || ans + o * curr >= 4294967296)
            {
                ans = 4294967296;
                return 0;
            }
        }
        else if(s == "for") 
        {
            int x; cin >> x;
            curr += takefor(x);
            if(o * curr >= 4294967296 || ans + o * curr >= 4294967296)
            {
                ans = 4294967296;
                return 0;
            }
        }
    }
    return o * curr;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n;

    while(c < n && ans < 4294967296)
    {
        string s; cin >> s;
        c++;
        if(s == "add") 
        {
            ans++;
            if(ans >= 4294967296) break;
        }
        if(s == "for")
        {
            int x; cin >> x;
            ans += takefor(x);
            if(ans >= 4294967296) break;
        }
    }

    if(ans < 4294967296) cout << ans;
    else cout << "OVERFLOW!!!";

    return 0;
}
