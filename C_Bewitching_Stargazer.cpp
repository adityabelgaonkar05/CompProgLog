#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void divide(int l, int r, int &ans, int &k, int &helper)
{
    helper++;
    if (r - l + 1 < k)
        return;
    int m = (l + r) / 2;
    if ((r - l + 1) & 1)
    {
        ans += m;
        divide(l, m - 1, ans, k, helper);
        divide(m + 1, r, ans, k, helper);
    }

    else
    {
        divide(l, m, ans, k, helper);
        divide(m + 1, r, ans, k, helper);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int helper = 0;
        cin >> n >> k;
        int ans = 0;
        divide(1, n, ans, k, helper);

        cout << ans << '\n';
        // cerr << helper << '\n';
    }

    return 0;
}