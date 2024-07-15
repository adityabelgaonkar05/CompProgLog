#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        vector<int> a(3);
        for(auto &i : a) cin >> i;

        for(int i = 0; i < 5; ++i)
        {
            int pos = min_element(a.begin(), a.end()) - a.begin();
            a[pos]++;
        }

        cout << a[0] * a[1] * a[2] << '\n';
    }

    return 0;
}