#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void rec(int n)
{
    if(n == 0) return;
    cout << n;
    if(n!=1) cout << " ";
    rec(n-1);
}

int32_t main()
{
    int n; cin >> n;
    rec(n);
    return 0;
}