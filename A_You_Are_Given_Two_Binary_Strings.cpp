#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string a, b; cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int c0 = 0;

        for(auto i : b)
        {
            if(i == '0') c0++;
            else 
            {
                break;
            }
        }
    
        int ans = find(a.begin() + c0, a.end(), '1') - a.begin();
        ans -= find(b.begin(), b.end(), '1') - b.begin();

        cout << ans << "\n";
    }

    return 0;
}