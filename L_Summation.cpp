#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int sum(vector<int> &a, int i, int s)
{
    if(i == a.size()) return s;
    return sum(a, i+1, s+a[i]);
}

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << sum(a, 0, 0);

    return 0;
}