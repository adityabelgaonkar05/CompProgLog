#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    cout << min(a[n-2] - a[0], a[n-1] - a[1]) << "\n";

    return 0;
}