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
        vector<int> b(n);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        int m; cin >> m;
        vector<int> d(m);
        for(auto &i : d) cin >> i;
        int countsame = 0;
        //d needs to end with an element of b;
        map<int, int> bmap;
        map<int, int> change;
        for(int i = 0; i < n; ++i) {bmap[b[i]]++; if(b[i] != a[i]) {countsame++; change[b[i]]++;}}
        if(countsame)
        {
            bool flag = 0;
            map<int, int> dmap; 
            for(auto i : d) dmap[i]++;
            for(auto i : change) 
            {
                i.second -= dmap[i.first];
                if(i.second > 0) {flag = 1; break;}
            }

            if(flag || (bmap[d[m-1]] == 0)) 
            {
                cout << "NO" << "\n";
                continue;
            }

            else cout << "YES" << "\n";
        }

        else if(bmap[d[m-1]]) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0; //each element will for sure change
}

//all characters in b are in d, and d[m-1] is in b
//b and a have same characters then d[m-1] in b