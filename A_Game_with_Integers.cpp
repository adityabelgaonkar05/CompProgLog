#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n%3) cout << "First" << endl;
        else cout << "Second" << endl;
    }

    return 0;
}