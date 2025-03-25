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
        vector<vector<int>> a(n, vector<int>(n));
        for (auto &i : a)
            for (auto &j : i)
                cin >> j;

        for (auto &i : a)
        {
            for (int j = 1; j < i.size(); ++j)
            {
                i[j] += i[j - 1];
            }
        }

        for (auto &i : a)
        {
            for (int j = 0; j < n; ++j)
            {
                i[j] = i[n - 1] - i[j];
            }

            sort(i.begin(), i.end() - 1);
        }

        for (auto i : a)
        {
            for (auto j : i)
                cout << j << ' ';
            cout << '\n';
        }
    }

    return 0;
}