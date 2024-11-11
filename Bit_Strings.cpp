#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 1;
    for (int i = 0; i < n; ++i)
    {
        ans = ans * 2;
        ans %= 1000000007;
    }

    cout << ans << '\n';

    return 0;
}