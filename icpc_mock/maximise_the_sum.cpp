#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());
        vector<int> b;

        int ans = 0;

        for (int i = 0; i < n / 2; ++i)
        {
            ans += abs(a[n - i - 1] - a[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}