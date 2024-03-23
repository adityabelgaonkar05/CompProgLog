#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n, m; cin >> n >> m;
    vector<int> x(n), y(m);
    for(int i = 0; i < n; ++i) cin >> x[i];
    for(int i = 0; i < m; ++i) cin >> y[i];

    for(int i = 0; i < n; ++i) if(find(y.begin(), y.end(), x[i]) != y.end())cout << x[i] << " "; 

    return 0;
}