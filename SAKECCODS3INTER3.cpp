#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int curr = a[0];
    for(int i = 0; i < n; ++i)
    { 
        if(curr <= curr + a[i] * i) curr += a[i] * i;
        else break; 
    }

    cout << curr << endl;

    return 0;
}