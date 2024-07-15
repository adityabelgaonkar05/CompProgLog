#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

vector<int> ans;

void recursion(vector<int> &a, int ind, int curr)
{
    if(ind == a.size()) {ans.push_back(curr); return;}
    recursion(a, ind + 1, curr + a[ind]);
    recursion(a, ind + 1, curr - a[ind]);
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // int t; cin >> t;
    // while(t--)
    // {

    // }

    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    recursion(a, 0, 0);
    
    bool flag = 0;
    for(int i : ans) if(i == 0 or (i % 360 == 0)) flag = 1;

    if(flag) cout << "YES";
    else cout << "NO";
    
    return 0;
}