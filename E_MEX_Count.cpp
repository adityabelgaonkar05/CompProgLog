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
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;

        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        vector<int> b(a.begin(), a.end());
        sort(b.begin(), b.end());

        int mex = 0;
        if (b[0] == 0)
            mex = 1;

        for (int i = 1; i < n; ++i)
        {
            if (b[i] == mex)
                mex++;
        }

        multiset<int> alls;

        set<int> s(b.begin(), b.end());

        for (int i : s)
        {
            if (i < mex)
            {
                alls.insert(mp[i]);
            }
        }

        for (auto &i : alls)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}