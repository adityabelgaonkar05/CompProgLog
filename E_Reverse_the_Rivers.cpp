#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int lowerbound(vector<int> a, int belownum)
{
    int l = 0, r = a.size() - 1;
    int currmax = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] < belownum)
        {
            currmax = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return currmax;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int>> a(k, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            cin >> a[j][i];
        }
    }

    for (auto &i : a)
    {
        for (int j = 1; j < n; ++j)
        {
            i[j] |= i[j - 1];
        }
    }

    // for (auto i : a)
    // {
    //     for (auto j : i)
    //         cout << j << ' ';
    //     cout << '\n';
    // }

    while (q--)
    {
        int m;
        cin >> m;
        pair<int, int> range;
        range.first = 0;
        range.second = n - 1;
        bool ispos = 1;

        while (m--)
        {
            int co, re;
            char o;
            cin >> co >> o >> re;
            if (!ispos)
                continue;

            if (o == '>')
            {
                range.first = max(range.first, 1ll * (upper_bound(a[co - 1].begin(), a[co - 1].end(), re) - a[co - 1].begin()));
                if (range.first > range.second)
                    ispos = 0;
            }

            else
            {
                int ind = lowerbound(a[co - 1], re);
                if (ind == -1)
                    ispos = 0;

                range.second = min(range.second, ind);

                if (range.first > range.second)
                    ispos = 0;
            }
        }

        if (range.first <= range.second)
            cout << range.first + 1 << '\n';

        else
            cout << -1 << '\n';
    }

    return 0;
}