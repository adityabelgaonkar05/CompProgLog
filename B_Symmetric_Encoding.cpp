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
        set<char> r1(s.begin(), s.end());
        string r;
        for(auto i : r1) r.push_back(i);

        string news = "";
        for(auto i : s)
        {
            int ind = find(r.begin(), r.end(), i) - r.begin();
            news+=r[r.size()-1-ind];
        }

        cout << news << "\n";
    }

    return 0;
}