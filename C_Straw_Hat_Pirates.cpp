#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t; 
    while(t--)
    {
        int a, b, m; cin >> a >> b >> m;
        int fw = m/a + m/b;
        cout << fw + 2 << endl;
    }

    return 0;
}