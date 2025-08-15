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

        map<int, int> freq;

        set<int> s(b.begin(), b.end());

        for (auto i : s)
            if (i < mex)
                freq[mp[i]]++;

        int ans = 1;

        for (int i = 0; i <= n - mex; ++i)
        {
            ans += freq[i];
            cout << ans << ' ';
        }

        for (int i = mex; i >= 1; --i)
            cout << i << ' ';

        cout << '\n';
    }

    return 0;
}