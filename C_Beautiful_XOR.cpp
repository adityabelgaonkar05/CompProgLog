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
        int a, b;
        cin >> a >> b;
        int pa = 0, pb = 0;

        for (int i = 30; i >= 0; --i)
        {
            if ((1 << i) & a)
            {
                pa = max(pa, i);
            }
            if ((1 << i) & b)
            {
                pb = max(pb, i);
            }
        }

        if (pb > pa)
        {
            cout << -1 << '\n';
            continue;
        }

        vector<int> ops;

        for (int i = 0; i <= 30; ++i)
        {
            if (((1 << i) & a) ^ ((1 << i) & b))
            {
                ops.push_back((1 << i));
            }
        }

        cout << ops.size() << '\n';
        if (ops.size())
        {
            for (auto &i : ops)
                cout << i << ' ';
            cout << '\n';
        }
    }

    return 0;
}

// 10 7
// 1010 0111
// 0001
// 1011
// 0100
// 1111
// 1000
// 0111

// 4 10
// 0100  1010 -1

// 1000
// 0010
// 0100
// 0110