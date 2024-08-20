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
        int a, b, k; cin >> a >> b >> k;
        cout << min(min(min(k * k, a * k), a * b), b * k) << endl;
    }

    return 0;
}