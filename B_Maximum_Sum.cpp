#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

const int MOD = 1000000007;

int kadanes(vector<int> &a)
{
    int maxsofar = 0;
    int currsum = 0;

    for(int i : a)
    {
        currsum = max(0ll, currsum + i);
        maxsofar = max(currsum, maxsofar);
    }

    return maxsofar % MOD;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n, k, ans = 0; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int kadaneval = kadanes(a);

        int sum = 0;
        for(int i : a) sum += i;
        sum = (sum % MOD + MOD) % MOD;

        int t = 1;
        for(int i = 1; i < k; ++i)
        {
            t = 2 * t % MOD;
        }

        ans = (sum + kadaneval * t -kadaneval + MOD) % MOD;

        cout << ans << '\n';
    }

    return 0;
}