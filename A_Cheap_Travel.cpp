#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n, m, a, b; cin >> n >> m >> a >> b;
    int count = b*(n/m);
    count += min(a*(n%m), b);
    cout << min(count, n*a) << endl;

    return 0;
}