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
        string s; cin >> s;
        if(is_sorted(s.begin(), s.end())) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}