#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, k, total; cin >> n >> k;
    total = ceil(2.0*n/k) + ceil(5.0*n/k) + ceil(8.0*n/k);
    cout << total << endl;
}