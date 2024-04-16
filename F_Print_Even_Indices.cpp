#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

string out = "";

void rec(vector<int> &a, int n)
{
    if(n == -1) return;
    if(n%2 == 0) {out += to_string(a[n]); out += " ";}
    rec(a, n-1);
}

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    rec(a, n-1);
    cout << out;

    return 0;
}