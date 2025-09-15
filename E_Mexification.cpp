#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

int mexx(vector<int> &mp) // i know this TLEs shut up;
{
    for (int i = 0; i < mp.size(); ++i)
        if (mp[i] == 0)
            return i;

    return mp.size();
}

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
        vector<int> mp(n + 1);

        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        int mex = mexx(mp);

        vector<int> b;

        for (auto i : a)
        {
            mp[i]--;
            int nmex = mexx(mp);
            b.push_back(nmex);
            mp[i]++;
        }

        int sumb = accumulate(b.begin(), b.end(), 0ll);

        if (k == 1)
        {
            cout << sumb << '\n';
            continue;
        }

        // cout << "notk\n";

        for (int i = 0; i < n + 1; ++i)
            mp[i] = 0;

        for (auto i : b)
            mp[i]++;

        mex = mexx(mp);

        vector<int> bb;

        for (auto i : b)
        {
            mp[i]--;
            int nmex = mexx(mp);
            bb.push_back(nmex);
            mp[i]++;
        }

        int sumbb = accumulate(bb.begin(), bb.end(), 0ll);

        if (bb == b)
            cout << sumb << '\n';
        else
        {
            if (k & 1)
                cout << sumb << '\n';
            else
                cout << sumbb << '\n';
        }
    }

    return 0;
}