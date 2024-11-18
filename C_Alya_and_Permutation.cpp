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

        if (n == 5)
        {
            cout << "5\n2 1 3 4 5\n";
            continue;
        }

        int temp = n;
        map<int, int> mp;
        mp[n]++;
        vector<int> ans;
        if (n & 1)
        {
            ans.push_back(n);
            n--;
        }

        ans.push_back(n);
        mp[n]++;

        int maxpow;

        for (int i = 31; i >= 0; --i)
        {
            if (n & (1 << i))
            {
                maxpow = i;
                break;
            }
        }

        for (int i = maxpow; i >= 2; --i)
        {
            ans.push_back((1 << i) - 1);
            mp[ans.back()]++;
            ans.push_back((1 << i) - 2);
            mp[ans.back()]++;
        }

        for (int i = 1; i <= n; ++i)
        {
            if (!mp[i])
            {
                ans.push_back(i);
            }
        }

        reverse(ans.begin(), ans.end());

        if (temp & 1)
        {
            cout << n + 1 << '\n';
        }

        else
            cout << (1 << (maxpow + 1)) - 1 << '\n';

        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';

        // for (int i = n - 1; i >= 0; --i)
        // {
        //     cout << ans[i] << ' ';
        // }

        // cout << '\n';
    }

    return 0;
}