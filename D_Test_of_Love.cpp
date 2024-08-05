#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

long long find_first_l_or_w(int l, int m, string &s)
{
    int latestw = -1;

    for(int i = l; (i < (l + m)) && (i < s.size()); ++i)
    {
        // cout << s[i];
        if(s[i] == 'L') {return i; break;}
        else if(s[i] == 'W') {latestw = i;}
    }

    return latestw;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
        bool ans = 0;
        string st; cin >> st;
        string s = "L" + st;
        ++n;
        int i = 0;

        while(i < n)
        {
            if(s[i] == 'L')
            {
                if(i + m >= n) {ans = 1; break;}
                int pos = find_first_l_or_w(i + 1, m, s);
                if(pos == -1) break;
                else i = pos;
            }

            else if(s[i] == 'W')
            {
                if(k <= 0) break;
                if(i == n - 1) {ans = 1; break;}
                else k--;
                ++i;
            }

            else
            {
                break;
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}