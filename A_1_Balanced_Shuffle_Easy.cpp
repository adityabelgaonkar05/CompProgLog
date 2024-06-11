#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    // int t; cin >> t;
    // while(t--)
    // {

    //}
    string s; cin >> s;
    vector<pair<int, int>> a;
    int pref = 0;

    for(int i = 0; i < s.size(); ++i)
    {
        a.push_back({pref, i});
        if(s[i] == '(') pref++;
        else pref--;
    }

    sort(a.begin(), a.end(), [](const pair<int, int> &p1, const pair<int, int> &p2) {
        if(p1.first == p2.first) return p1.second > p2.second;
        return p1.first < p2.first;
    });

    for(auto i : a) cout << s[i.second];
    cout << "\n";

    return 0;
}