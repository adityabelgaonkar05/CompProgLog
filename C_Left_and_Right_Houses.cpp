#include<bits/stdc++.h>
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
        int track = 0;
        map<char, int> mp, tempmp;
        for(auto x : s)
        {
            mp[x]++;
        }

        if()
        {
            cout << "0" << endl;
            continue;
        }

        for(int i = 0; i < n; ++i)
        {
            mp[s[i]]--;
            tempmp[s[i]]++;

            if(tempmp['0'] >= tempmp['1'] && mp['1'] >= mp['0'])
            {
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}