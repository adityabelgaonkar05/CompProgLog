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
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        map<int, int> mp;
        for(auto i : a) mp[i]++;
        if(mp.size() == 1) cout << "NO\n";

        else
        {
            string s;
            int first = a[0];
            int second;
            for(int i = 1; i < n; ++i)
            {
                if(a[i] != first) second = i;
            }

            int tobeblue = -1;

            for(int i = 1; i < n; ++i)
            {
                if(i != second) tobeblue = i;
            }

            for(int i = 0; i < n; ++i)
            {
                if(i == tobeblue) s.push_back('B');
                else s.push_back('R');
            }

            cout << "YES\n" << s << "\n";
        }
    }

    return 0;
}