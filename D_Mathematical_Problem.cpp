#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int ind = 0;
        int minitwo = 99;
        
        for(int i = 0; i < n-1; ++i)
        {
            string rp = "0";
            rp.push_back(s[i]);
            rp.push_back(s[i + 1]);
            if(stoi(rp) < minitwo)
            {
                minitwo = stoi(rp);
                ind = i;
            }
        }
        
        if(minitwo == 0)
        {
            cout << 0 << '\n';
        }

        else if(n == 2)
        {
            cout << minitwo << '\n';
        }

        else if(n == 3)
        {
            if(s[0] == '0' or s[2] == '0') cout << 0 << '\n';
            else
            {
                s.erase(ind, 1);
                s.erase(ind, 1);

                string rp = "0";
                rp.push_back(s[0]);
                
                cout << min(minitwo + stoi(rp), minitwo * stoi(rp)) << '\n';
            }
        }

        else
        {
            if(find(s.begin(), s.end(), '0') != s.end()) cout << 0 << '\n';
            else
            {
                s.erase(ind, 1);
                s.erase(ind, 1);

                for(char i : s)
                {
                    if(i != '1')
                    {
                        string rp = "0";
                        rp.push_back(i);
                        minitwo = min(minitwo + stoi(rp), minitwo * stoi(rp));
                    }
                }

                cout << minitwo << '\n';
            }
        }
    }

    return 0;
}