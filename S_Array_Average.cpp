#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

double avg(vector<int> &a, int i, int curri, double s)
{
    if(i == curri) return s/i;
    return avg(a, i, curri+1, s+a[curri]);
}

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    cout << setprecision(6) << fixed << avg(a, n, 0, 0.0) << endl;

    return 0;
}