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

        for (int i = n / 2 - 1; i >= 0; --i)
        {
            if (a[i] == a[i + 1] || a[n - i - 1] == a[n - i - 2])
                swap(a[i], a[n - i - 1]);
        }

        int ans = 0;

        // for (auto i : a)
        //     cout << i << ' ';
        // cout << '\n';

        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] == a[i + 1])
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}