#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
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
        for (auto &i : a)
            cin >> i;

        map<int, int> mp;

        bool cond = 0;

        for (int i = 0; i < n; ++i)
        {
            mp[a[i]]++;

            if (mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[3] >= 1 && mp[5] >= 1)
            {
                cout << i + 1 << '\n';
                cond = 1;
                break;
            }
        }

        if (!cond)
            cout << 0 << '\n';
    }

    return 0;
}
