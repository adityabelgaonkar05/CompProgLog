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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ck = 0;
        int clk = 0;

        for (auto &i : a)
            if (i == k)
                ck++;

        set<int> s(a.begin(), a.end());

        for (int i = 0; i < k; ++i)
        {
            if (s.find(i) == s.end())
            {
                clk++;
                ck = max(0ll, ck - 1);
            }
        }

        cout << clk + ck << '\n';
    }

    return 0;
}