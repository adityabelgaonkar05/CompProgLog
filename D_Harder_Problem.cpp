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

        vector<int> dp(n + 10, 0);
        int unused = 1;

        for (int i = 0; i < n; ++i)
        {
            if (!dp[a[i]])
            {
                dp[a[i]] = 1;
                cout << a[i] << ' ';
            }

            else
            {
                while (dp[unused])
                {
                    unused++;
                }

                cout << unused << ' ';
                dp[unused]++;
                unused++;
            }
        }

        cout << '\n';
    }

    return 0;
}