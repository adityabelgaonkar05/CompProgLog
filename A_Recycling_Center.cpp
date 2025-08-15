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
        int n, c;
        cin >> n >> c;
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        int ans = 0;

        while (a.size())
        {
            // for (auto i : a)
            //     cout << i << ' ';
            // cout << '\n'
            //      << c << '\n';

            if (a[0] > c)
            {
                ans++;
                a.erase(a.begin());
                continue;
            }

            int ind = 0;
            for (ind = 0; ind < a.size(); ++ind)
            {
                if (a[ind] > c)
                {
                    vector<int> temp;
                    for (int i = 0; i < a.size(); ++i)
                    {
                        if (i == ind - 1)
                            continue;
                        temp.push_back(a[i]);
                    }

                    a = temp;
                    break;
                }
            }

            for (auto &i : a)
                i *= 2;
        }

        cout << ans << '\n';
    }

    return 0;
}