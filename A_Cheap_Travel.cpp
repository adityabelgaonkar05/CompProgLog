#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = a * n;

    ans = min(ans, n / m * b + min((n % m) * a, b));
    cout << ans;
    return 0;
}