#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<int> a(3); cin >> a[0] >> a[1] >> a[2];

        cout << max(0ll, max(a[2], a[1]) + 1 - a[0]) << " ";
        cout << max(0ll, max(a[0], a[2]) + 1 - a[1]) << " ";
        cout << max(0ll, max(a[0], a[1]) + 1 - a[2]) << " ";
        
        cout << "\n";
    }

    return 0;
}