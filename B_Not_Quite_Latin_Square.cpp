#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<vector<char>> ar;

        for(int i = 0; i < 3; ++i)
        {
            vector<char> temp(3);
            for(auto &i : temp) cin >> i;
            ar.push_back(temp);
        }

        map<char, int> mp;
        mp['A'] = 0;
        mp['B'] = 0;
        mp['C'] = 0;

        for(int i = 0; i < 3; ++i)
        {
            if(find(ar[i].begin(), ar[i].end(), '?') != ar[i].end())
            {
                for(auto i : ar[i]) mp[i]++;
                break;
            }
        }

        if(mp['A'] == 0) cout << "A\n";
        else if(mp['B'] == 0) cout << "B\n";
        else cout << "C\n";
    }

    return 0;
}