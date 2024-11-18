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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());

        int ans = 0;        // clicks done
        int cansbought = 0; // cans bought (n - i) * a[i]

        for (int i = 0; i < n; ++i)
        {
            if ((n - i) * a[i] <= k - cansbought)
            {
                cansbought += (n - i) * (a[i] - i);
                ans++;
                while (a[i] == a[i + 1])
                {
                    i++;
                    // cout << a[i];
                    ans++;
                }
            }
        }

        cout << ans + k << '\n';
    }

    return 0;
}