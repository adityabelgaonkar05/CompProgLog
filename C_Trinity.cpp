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
        int ans = INT_MAX;
        int s = 0;

        for (int i = 2; i < n; ++i)
        {
            while (s < (i - 1))
            {
                if (a[s] + a[s + 1] > a[i])
                {
                    break;
                }

                else
                    s++;
            }

            ans = min(ans, (n - i - 1) + s);
        }

        cout << ans << '\n';
    }

    return 0;
}