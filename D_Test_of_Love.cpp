#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

pair<int, int> findlogorwat(string &s, int i, int m)
{
    pair<int, int> locwat = {-1, -1};
    int cond = s.size();
    for(int j = i + 1; j < min(1 + m + i, cond); ++j)
    {
        if(s[j] == 'L') return {j, 1};
        else if(s[j] == 'W') locwat = {j, 0};
    }

    return locwat;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
        string s; cin >> s;
        bool caught = 0;
        int i = -1;
        while(i < n)
        {
            if(n - i <= m) break;
            if(i == -1 or s[i] != 'W')
            {    
                pair<int, int> res = findlogorwat(s, i, m);
                if(res.first == -1) {caught = 1; break;}
                else if(res.second == 1) i = res.first;
                else 
                {
                    if(k == 0) {caught = 1; break;}
                    i = res.first;
                    k--;
                }
            }

            else
            {
                if(i == n - 1) break;
                else if(s[i + 1] == 'C') {caught = 1; break;}
                else if(s[i + 1] == 'W' && k == 0) {caught = 1; break;}
                else if(s[i + 1] == 'W') k--;
                i++;
            }
        }

        if(caught) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
