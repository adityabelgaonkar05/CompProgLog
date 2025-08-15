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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        multiset<int> remainders;

        for (int i = 0; i < n; ++i)
        {
            remainders.insert(b[i] % k);
        }

        bool cond = 1;

        for (int i : a)
        {
            int tt = i;
            int remain = tt % k;
            auto it = remainders.find(remain);
            if (it != remainders.end())
            {
                remainders.erase(it);
                continue;
            }

            tt -= (tt / k) * k;
            remain = abs(tt - k);

            it = remainders.find(remain);
            if (it != remainders.end())
            {
                remainders.erase(it);
                continue;
            }

            cond = 0;
            break;
        }

        if (cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}