#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        int l = 0, r = x + 10;
        int ans = 0;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int count = 0;

            for (int i = 0; i <= a[0] - mid && count < k; ++i)
            {
                count++;
            }

            for (int i = x; i >= a.back() + mid && count < k; --i)
            {
                count++;
            }

            for (int i = 0; i < n - 1 && count < k; ++i)
            {
                for (int j = a[i] + mid; j <= a[i + 1] - mid && count < k; ++j)
                {
                    count++;
                }
            }

            if (count >= k)
            {
                l = mid + 1;
                ans = mid;
            }
            else
                r = mid - 1;

            // cout << mid << ' ';
        }

        int printed = 0, lastprinted = -1;

        for (int i = 0; i <= a[0] - ans && printed < k; ++i)
        {
            if (lastprinted != i)
            {
                cout << i << ' ';
                printed++;
                lastprinted = i;
            }
        }

        for (int i = 0; i < n - 1 && printed < k; ++i)
        {
            for (int j = a[i] + ans; j <= a[i + 1] - ans && printed < k; ++j)
            {
                if (lastprinted != j)
                {
                    cout << j << ' ';
                    printed++;
                    lastprinted = j;
                }
            }
        }

        for (int i = a.back() + ans; i <= x && printed < k; ++i)
        {
            if (lastprinted != i)
            {
                cout << i << ' ';
                printed++;
                lastprinted = i;
            }
        }

        cout << '\n';
    }

    return 0;
}