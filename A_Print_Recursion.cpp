#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void rec(int b, int n)
{
    if(n == b) return;
    cout << b << endl;
    rec(b+1, n);
}

int32_t main()
{
    int n; cin >> n;
    rec(1, n);

    return 0;
}