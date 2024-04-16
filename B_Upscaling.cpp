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
        for(int i = 0; i < n; ++i)
        {
            string s = "";
            for(int j = 0; j < n; ++j)
            {
                if((j + i) % 2) s += "..";
                else s+= "##";
            }

            cout << s << endl << s << endl;
        }
    }

    return 0;
}