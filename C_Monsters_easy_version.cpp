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
        {
            cin >> i;
        }

        sort(a.begin(), a.end());

        int ideal = 1;
        int ans = a[0] - 1;

        // for (auto i : a)
        //     cout << i << ' ';

        for (int i = 1; i < n; ++i)
        {
            if (a[i] == (ideal + 1))
            {
                ideal++;
            }

            else if (a[i] > ideal)
            {
                ideal++;
                ans += a[i] - ideal;
            }

            // cout << ideal << ' ';
        }

        cout << ans << '\n';
    }

    return 0;
}