#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> a(1000), b(1000);
    map<int, int> mp;

    for (int i = 0; i < 1000; ++i)
    {
        cin >> a[i] >> b[i];
        mp[b[i]]++;
    }

    int ans = 0;

    for (int i = 0; i < 1000; ++i)
    {
        ans += a[i] * mp[a[i]];
    }

    cout << ans;

    return 0;
}