#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> a;
        a.clear();
        vector<string> b;
        b.clear();
        
        string curra = "", currb = "";
        
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0')
            {
                if(currb.size()) b.push_back(currb);
                currb = "";
                curra += '0';
            }
            
            else
            {
                if(curra.size()) a.push_back(curra);
                curra = "";
                currb += '1';
            }
        }
        
        if(currb.size()) b.push_back(currb);
        currb = "";
        if(curra.size()) a.push_back(curra);
        curra = "";
        
        if(b.size() == 0) 
        {
            if(n < 3) cout << n << '\n';
            else cout << 2 << '\n';
        }
        else if((b.size() + a.size()) & 1) cout << "0\n";
        else
        {
            int shortest = INT_MAX;
            for(auto i : a) shortest = min(shortest, (long long)i.size());
            
            if(b.size() > 1 && shortest <= 2) cout << shortest << '\n';
            else cout << 1 << '\n';
        }
    }
    
    return 0;
}
