#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;
    
    for(auto &i : a) cin >> i;
    int sofarlargest = a[0];
    for(int i = 1; i < n; ++i)
    {
        if(a[i]<sofarlargest) ans+=sofarlargest-a[i];
        sofarlargest = max(sofarlargest, a[i]);
    }

    cout << ans;

    return 0;
}