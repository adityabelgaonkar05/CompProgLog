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

        vector<int> preffor, prefbac;

        preffor.push_back(0);
        preffor.push_back(1);
        prefbac.push_back(0);
        prefbac.push_back(1);

        for (int i = 2; i < n; ++i)
        {
            if (a[i - 1] - a[i - 2] < a[i] - a[i - 1])
            {
                preffor.push_back(preffor.back() + a[i] - a[i - 1]);
            }
            else
            {
                preffor.push_back(preffor.back() + 1);
            }
        }

        for (int i = n - 3; i >= 0; --i)
        {
            if (a[i + 2] - a[i + 1] < a[i + 1] - a[i])
            {
                prefbac.push_back(prefbac.back() + a[i + 1] - a[i]);
            }
            else
            {
                prefbac.push_back(prefbac.back() + 1);
            }
        }

        reverse(prefbac.begin(), prefbac.end());

        // for (auto i : preffor)
        //     cout << i << ' ';
        // cout << '\n';
        // for (auto i : prefbac)
        //     cout << i << ' ';
        // cout << '\n';

        int m;
        cin >> m;

        for (int i = 0; i < m; ++i)
        {
            int a, b;
            cin >> a >> b;

            if (a < b)
            {
                cout << preffor[b - 1] - preffor[a - 1] << '\n';
            }
            else
            {
                cout << prefbac[b - 1] - prefbac[a - 1] << '\n';
            }
        }
    }

    return 0;
}