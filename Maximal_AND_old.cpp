#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;
string converttobin(int n)
{
    string ans = "";
    while(n > 0)
    {
        ans+=to_string(n%2);
        n/=2;
    }

    return ans;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        vector<string> b;
        for(auto x : a) b.push_back(converttobin(x));
        
        map<int, int> mp;
        for(auto x : b) for(int i = 0; i < x.size(); ++i) if(x[i] == '1') mp[i] += pow(2, i);

        vector<pair<int, int>> c;

        for(auto x : mp)
        {
            c.push_back({x.second, x.first});
        }


        sort(c.rbegin(), c.rend());
        
        string out(k, '0');
        for(auto x : c)
        {
            out[x.second] = '1';
            k--;
            if(k == 0) break;
        }

        cout << out << "\n";
    }

    return 0;
}