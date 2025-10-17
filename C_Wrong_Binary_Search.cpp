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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> ans(n);
        bool cond = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                ans[i] = i + 1;
            }
        }

        int prev = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                if (i - prev == 1)
                {
                    cond = 1;
                    break;
                }
                int gg = i;
                for (int j = prev; j < i; ++j)
                {
                    ans[j] = gg--;
                }

                prev = i + 1;
            }
        }

        if (n - prev == 1)
        {
            cond = 1;
        }

        if (s.back() == '0' and s[n - 2] == '1')
        {
            cond = 1;
        }

        int gg = n;

        for (int j = prev; j < n; ++j)
        {
            ans[j] = gg--;
        }

        if (cond)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES" << '\n';

        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}