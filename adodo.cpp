#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, k;
    cin >> n >> k >> r;

    int m = n - r;

    int av = (m * m + 1) / 2;

    if (av < k)
    {
        cout << "NO\n";
    }

    else
        cout << "YES\n";

    return 0;
}