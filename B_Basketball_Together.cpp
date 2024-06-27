#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, d; cin >> n >> d;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int notavailable = 0;

    int ans = 0;
    sort(a.rbegin(), a.rend());

    int i = 0;
    while(i < a.size())
    {
        if(a[i] * (a.size() - i) <= d) break;
        int toremove = d/a[i];
        ans++;
        if(d % a[i]) toremove = max(0ll, toremove - 1);
        while(toremove--)
        {
            a.pop_back();
        } 
        i++;
    }

    cout << ans << '\n';

    return 0;
}