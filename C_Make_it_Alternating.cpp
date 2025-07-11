#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{

    vector<int> fact;
    fact.push_back(1);

    for (int i = 1; i <= 200010; ++i)
    {
        int topush = i * fact.back() % 998244353;
        fact.push_back(topush);
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int rep = 0;
        int ans = 1;

        int curr = 1;
        char prev = s[0];

        vector<int> parts;

        for (int i = 1; i < s.size(); ++i)
        {
            if (prev == s[i])
            {
                rep++;
                curr++;
            }
            else
            {
                prev = s[i];
                if (curr == 1)
                    continue;
                parts.push_back(curr);
                curr = 1;
            }
        }

        if (curr > 1)
            parts.push_back(curr);

        int pnt = 1;

        for (auto &i : parts)
        {
            ans *= i;
            ans %= 998244353;
            ans *= fact[s.size() - pnt++];
            ans %= 998244353;
        }

        cout << rep << ' ' << ans << '\n';
    }

    return 0;
}