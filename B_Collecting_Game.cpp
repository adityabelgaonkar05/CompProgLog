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
        vector<int> a(n), b;
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            b.push_back(i);
        }

        sort(a.begin(), a.end());
        vector<int> pre(1);
        pre[0] = 0;
        for (int i = 0; i < n; ++i)
        {
            pre.push_back(pre.back() + a[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            int ans = i;
            while ((ans < n - 1) && (pre[ans + 1] * 2 >= pre[ans + 2]))
            {
                ans++;
            }

            for (int j = i; j <= ans; ++j)
            {
                mp[a[j]] = ans;
            }

            i = ans;
        }

        // mp[a[n - 1]] = n - 1;

        for (int i : b)
        {
            cout << mp[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}