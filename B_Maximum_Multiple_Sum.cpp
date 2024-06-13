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
        int maxsum = 0;
        int ans = 2;

        for(int i = 2; i <= n; ++i)
        {
            int mult = 1;
            int temp = 0;
            while(mult * i <= n)
            {
                temp+=mult*i;
                mult++;
            }

            if(temp > maxsum) {maxsum = temp; ans = i;}
        }

        cout << ans << '\n';
    }

    return 0;
}