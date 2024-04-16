#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int count = 0;
        
        for(int i = 0; i < n - 4; i++)
        {
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i' && s[i+4] == 'e')
            {
                s[i+2] = '0';
                count++;
            }
        }

        for(int i = 0; i < n - 2; i++)
        {
            if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')
            {
                s[i+1] = '0';
                count++;
            }
            else if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p')
            {
                s[i+1] = '0';
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
