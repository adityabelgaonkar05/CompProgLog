#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int MOD = 998244353;

    vector<int> factorial({1});

    for (int i = 1; i <= 200010; ++i)
    {
        factorial.push_back((factorial.back() * i) % MOD);
    }

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> consec;

        string s;
        cin >> s;

        int n = s.size();

        int curr = 0;
        int ans1 = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == s[i + 1])
                curr++;

            else
            {
                ans1 += curr;
                if (curr >= 1)
                    consec.push_back(curr + 1);
                curr = 0;
            }
        }

        ans1 += curr;
        if (curr >= 1)
            consec.push_back(curr + 1);

        int ans2 = 1;

        for (auto i : consec)
        {
            ans2 *= i;
            ans2 %= MOD;
        }

        // cout << '\n';

        ans2 *= factorial[ans1];
        ans2 %= MOD;

        cout << ans1 << ' ' << ans2 << '\n';
    }

    return 0;
}