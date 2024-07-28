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
        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        vector<vector<int>> hash1(26, vector<int> (n)), hash2(26, vector<int> (n));
        
        for(int i = 97; i <= 122; ++i)
        {
            int curr1 = 0;
            int curr2 = 0;

            for(int j = 0; j < n; ++j)
            {
                if(s1[j] == ((char)i)) curr1++;
                if(s2[j] == ((char)i)) curr2++;
                hash1[i - 97][j] = curr1;
                hash2[i - 97][j] = curr2;
            }
        }

        for(int op = 0; op < m; ++op)
        {
            int l, r; cin >> l >> r;
            int ans = 0;

            for(int i = 0; i < 26; ++i)
            {
                int total1 = hash1[i][r - 1] - hash1[i][l - 1];
                if(l == 1 && hash1[i][0]) ++total1;
                else if(l > 1 && (hash1[i][l - 2] < hash1[i][l - 1])) ++total1;

                int total2 = hash2[i][r - 1] - hash2[i][l - 1];
                if(l == 1 && hash2[i][0]) ++total2;
                else if(l > 1 && (hash2[i][l - 2] < hash2[i][l - 1])) ++total2;

                if(total1 >= total2) ans+=(total1 - total2);
                // if(ans) cout << total1 << ' ' << total2 << '\n';
            }
            cout << ans << '\n';
        }
    }

    return 0;
}