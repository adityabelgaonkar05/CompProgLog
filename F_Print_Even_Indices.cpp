#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void rec(vector<int> &a, int n)
{
    if(n == -1) return;
    if(n%2 == 0) cout << a[n] << " ";
    rec(a, n-1);
}

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    rec(a, n-1);

    return 0;
}