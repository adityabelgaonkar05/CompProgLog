#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n, m; cin >> n >> m;
    vector<pair<string, string>> s(m);
    string s1, s2;
    for(auto &i : s) cin >> i.first >> i.second;
    vector <string> news(n);
    for(auto &i : news) cin >> i;
    string ans = "";

    for(auto x : news)
    {
        for(auto y : s)
        {
            if(x == y.first)
            {
                if(y.first.size() <= y.second.size()) ans += y.first + " ";
                else ans += y.second + " ";
            }
        }
    }

    cout << ans << endl;

    return 0;
}