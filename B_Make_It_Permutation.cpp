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

        vector<vector<int>> ops;

        // 3 2 1
        // 2 1 3
        // 1 3 2

        ops.push_back({1, 1, n});

        // 4 3 2 1
        // 3 2 1 4
        // 2 1 4 3
        // 1 4 3 2

        for (int i = 2; i <= n; i++)
        {
            int fr = n - i + 1, b = fr + 1;

            ops.push_back({i, 1, fr});

            if (b <= n)
                ops.push_back({i, b, n});
        }

        cout << ops.size() << endl;

        for (auto v : ops)
            cout << v[0] << ' ' << v[1] << ' ' << v[2] << endl;
    }

    return 0;
}