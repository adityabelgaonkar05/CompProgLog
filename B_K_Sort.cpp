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
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        if(n == 1) cout << "0\n";
        else
        {
            int largest = 0;
            int largest2 = 0;
            int ans = 0;

            for(auto i : a)
            {
                largest = max(largest, i);
                ans += largest - i;
                largest2 = max(largest2, largest - i);
            }

            cout << ans + largest2 << '\n';
        }
    }

    return 0;
}