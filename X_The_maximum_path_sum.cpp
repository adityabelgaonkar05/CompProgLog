#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int maxans(vector<vector<int>> &a, int curri, int currj, int i, int j)
{
    if(curri == i && currj == j) return a[curri][currj];
    else if(curri == i) return a[curri][currj] + maxans(a, curri, currj+1, i, j);
    else if(currj == j) return a[curri][currj] + maxans(a, curri+1, currj, i, j);
    return max(a[curri][currj] + maxans(a, curri+1, currj, i, j), a[curri][currj] + maxans(a, curri, currj+1, i, j));
}

int32_t main()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> a;
    vector<int> temp(m);

    for(int i = 0; i < n; ++i) {for(auto &i : temp) cin >> i; a.push_back(temp);}
    int ans  = maxans(a, 0, 0, n-1, m-1);
    cout << ans;
    return 0;
}