#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n; cin >> n;

    vector<int> a(2*n); for(int i = 0; i < 2*n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    unordered_map<int, int> mp;
    for(int i = 0; i < 2*n; i++) mp[a[i]]++;

    if(mp[a[0]] == 2*n)
    {
        cout << "-1\n";
        return 0;
    }

    else
    {
        for(int i = 0; i < 2*n; i++) cout << a[i] << " ";
    }
    
    return 0;
}