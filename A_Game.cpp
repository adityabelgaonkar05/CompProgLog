#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    n%2 ? cout << a[n/2] : cout << a[n/2-1];
    return 0;
}