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

        vector<int> ans;

        if (!(n & (n - 1)))
        {
            cout << 1 << '\n'
                 << n << '\n';
            continue;
        }

        for (int i = 62; i >= 0; --i)
        {
            if ((1ll << i) & n)
                ans.push_back(n - (1ll << i));
        }

        cout << ans.size() + 1 << '\n';

        for (auto i : ans)
            if (i)
                cout << i << ' ';

        cout << n << '\n';
    }

    return 0;
}