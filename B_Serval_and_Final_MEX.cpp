#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        // if only single 0, then MEX with closest element
        // if more than 1 0 then MEX in pairs

        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<pair<int, int>> ops;

        while (a.size() > 1)
        {
            int i = a.size() - 1;
            while (i > 0)
            {
                if (!a[i] && !a[i - 1])
                {
                    break;
                }

                i--;
            }

            if (!i)
            {
                i = a.size() - 1;
                while (i > 0)
                {
                    if (!a[i] || !a[i - 1])
                    {
                        break;
                    }

                    i--;
                }
            }

            if (!i)
            {
                ops.push_back({1, a.size()});
                break;
            }

            a.erase(a.begin() + i);
            ops.push_back({i, i + 1});
            a[i - 1] = 1;
        }

        cout << ops.size() << '\n';
        for (auto i : ops)
            cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}