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

        vector<vector<int>> a(n, vector<int>(3));

        int ind = 1;

        for (auto &i : a)
        {
            cin >> i[0] >> i[1];
            i[2] = ind++;
        }

        sort(a.begin(), a.end());

        vector<vector<int>> fa, sa;

        for (int i = 0; i < n / 2; ++i)
        {
            fa.push_back(a[i]);
        }

        for (int i = n / 2; i < n; ++i)
        {
            sa.push_back(a[i]);
        }

        sort(fa.begin(), fa.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] < b[1]; });

        sort(sa.rbegin(), sa.rend(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] < b[1]; });

        for (int i = 0; i < n / 2; ++i)
        {
            cout << fa[i][2] << ' ' << sa[i][2] << '\n';
        }
    }

    return 0;
}