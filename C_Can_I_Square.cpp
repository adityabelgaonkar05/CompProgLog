#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int sum = 0;

        for(auto i : a) sum += i;
        int sqrtsum = sqrt(sum);

        if(sqrtsum * sqrtsum == sum) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}