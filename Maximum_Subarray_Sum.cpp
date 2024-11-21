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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int ans = INT_MIN;
    int curr = 0;

    for (int i = 0; i < n; ++i)
    {
        curr += a[i];
        ans = max(curr, ans);
        if (curr < 0)
            curr = 0;
    }

    cout << ans << '\n';

    return 0;
}