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

        int ans = 0;

        vector<int> b = {0};

        for (int i = 0; i < n; ++i)
        {
            b.push_back(a[i] + b.back());
        }

        // for (auto i : b)
        //     cout << i << ' ';
        // cout << '\n';

        int ind = 0;
        while (ind <= n)
        {
            map<int, int> mp;
            while (ind <= n)
            {
                if (mp[b[ind]])
                {
                    ans++;
                    // ind++;
                    break;
                }
                mp[b[ind]]++;
                ind++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}