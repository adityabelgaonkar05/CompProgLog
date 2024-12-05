#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> arr(k, vector<int>(3));
    for (auto &i : arr)
    {
        cin >> i[0] >> i[1] >> i[2];
        i[0]--, i[1]--; // 0-based indexing
    }

    // Initialize the array as {1, 2, ..., n}
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);

    // Process each query
    for (const auto &q : arr)
    {
        int l = q[0], r = q[1], m = q[2];
        int curr_min = *min_element(ans.begin() + l, ans.begin() + r + 1);

        // If the minimum value in the range equals `m`
        if (curr_min == m)
        {
            // Find the first element equal to `m` in the range and adjust it
            for (int i = l; i <= r; i++)
            {
                if (ans[i] == m)
                {
                    ans[i] = (m == n ? m - 1 : m + 1); // Increment or decrement
                    break;
                }
            }

            // Check if adjustment succeeded
            curr_min = *min_element(ans.begin() + l, ans.begin() + r + 1);
            if (curr_min == m)
            {
                cout << "-1\n";
                return;
            }
        }
    }

    // Final validation
    for (const auto &q : arr)
    {
        int l = q[0], r = q[1], m = q[2];
        if (*min_element(ans.begin() + l, ans.begin() + r + 1) == m)
        {
            cout << "-1\n";
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << (i < n - 1 ? " " : "\n");
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
