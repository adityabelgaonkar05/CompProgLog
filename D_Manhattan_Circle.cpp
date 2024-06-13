#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vector<string> s(n);

        for(auto &i : s) cin >> i;
        int longest = 0;
        int x, y;

        for(int i = 0; i < n; ++i)
        {
            int longt = 0;
            for(int j = 0; j < m; ++j)
            {
                if(s[i][j] == '#') longt++;
            }

            if(longt > longest)
            {
                longest = longt;
                y = i;
            }

            else if(longt < longest) break;
        }

        int start = 0;

        for(int i = 0; i < m; ++i)
        {
            if(s[y][i] == '#') {start = i; break;}
        }

        x = longest/2 + start;

        cout << y + 1 << " " << x + 1 << '\n';
    }

    return 0;
}