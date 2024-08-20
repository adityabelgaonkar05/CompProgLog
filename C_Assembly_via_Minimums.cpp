#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n * (n - 1) / 2);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());
        int i = 0;

        while(n-- > 1)
        {
            cout << a[i] << ' ';
            i += n;
        }

        cout << a.back() << '\n';
    }

    return 0;
}