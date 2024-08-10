#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int l = 1, r = 999;
        int mid;
        while(l < r)
        {
            mid = l + (r - l) / 2;
            cout << '?' << l << r << '\n';
            int res; cin >> res;
            if(res == l * r) l  = mid;
            else if(res < l * r) r = mid - 1;
        }

        cout << '!' << mid << '\n';
    }

    return 0;
}