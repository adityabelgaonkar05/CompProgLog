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

        if (n > 1)
        {
            sort(a.begin(), a.end());
            vector<int> b;

            if (n & 1)
            {
                int ans = INT64_MAX;

                for (int i = 0; i < n; ++i)
                {
                    int curr = 0;

                    for (int j = 0; j < n - 1; j += 2)
                    {
                        if (j == i)
                        {
                            j--;
                            continue;
                        }

                        curr = max(curr, a[j + 1] - a[j]);
                    }

                    ans = min(ans, curr);
                }

                cout << ans << '\n';
            }

            else
            {
                for (int i = 0; i < n; i += 2)
                {
                    b.push_back(a[i + 1] - a[i]);
                }

                cout << *max_element(b.begin(), b.end()) << '\n';
            }
        }

        else
            cout << 1 << '\n';
    }

    return 0;
}