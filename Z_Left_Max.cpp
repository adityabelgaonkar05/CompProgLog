#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

void maximum(vector<int> &a, int i, int curri, int currmax)
{
    if(i == curri) return;
    cout << max(currmax, a[curri]) << " ";
    maximum(a, i, curri+1, max(currmax, a[curri]));
}

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int mini = INT_MIN;
    maximum(a, n, 0, mini);

    return 0;
}