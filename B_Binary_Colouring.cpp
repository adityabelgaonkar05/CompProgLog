#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;

        string s;

        while(x)
        {
            s += to_string(x%2);
            x/=2;
        }

        bool flag = 0;

        for(int i = 0; i < s.size()-1; ++i)
        {
            if(s[i] == '1' && s[i+1] == '1')
            {
                s[i] = '2';
                flag = 1;
                int ind = i+1;
                while(s[ind] == '1' && ind < s.size()) {s[ind] = '0'; ind++;}
                if(ind < s.size() && s[ind] == '0') s[ind] = '1';
                else 
                {
                    s.push_back('1');
                    break;
                }
                i = ind-1;
            }
        }

        cout << s.size() << "\n";
        for(char i : s)
        {
            if(i == '2') cout << "-1";
            else cout << i;
            cout << " ";
        }

        cout << "\n";
    }

    return 0;
}