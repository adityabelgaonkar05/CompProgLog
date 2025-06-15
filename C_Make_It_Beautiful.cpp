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

        multiset<int> ms;
        int ans = 0;

        for (int x : a)
        {
            for (int i = 62; i >= 0; --i)
            {
                if (x & (1ll << i))
                    ans++;
                else
                    ms.insert(i);
            }
        }

        for (int i : ms)
        {
            if (k >= (1ll << i))
            {
                ans++;
                k -= (1ll << i);
            }

            else
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}