#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        reverse(s.begin(), s.end());
        map<char, int> mp;
        
        for(int i = 0; i < n; ++i)
        {
            mp[s[i]]++;
        }

        int sum = 0;
        int prev1 = 0;

        for(int i = 0; i < mp['0']; ++i)
        {
            if(s[i] == '1')
            {
                int it = find(s.begin() + prev1, s.end(), '0') - s.begin();
                sum += it - i;
                swap(s[it], s[i]);
                prev1 = it;
            }

            else if(s[i] == '0') prev1 = i+1;
            
            cout << sum << " ";
        }

        for(int i = 0; i < mp['1']; ++i) cout << -1 << " ";

        cout << "\n";
    }

    return 0;
}