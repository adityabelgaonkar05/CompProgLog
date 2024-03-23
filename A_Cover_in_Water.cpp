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
        bool  cond = 0;
        int count  = 0;
        int countdots = 0;
        for(auto x : s)
        {
            if(x == '.') 
            {
                count++;
                countdots++;
            }

            else count = 0;
            if(count == 3) cond = 1;
        }

        cond ? cout << 2 << endl : cout << countdots << endl;
    }

    return 0;
}