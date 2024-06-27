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
        int a, b, c; cin >> a >> b >> c;
        vector<int> xp = {a, b, c};
        sort(xp.begin(), xp.end());
        cout << abs(a - xp[1]) + abs(b - xp[1]) + abs (c - xp[1]) << '\n';
    }

    return 0;
}