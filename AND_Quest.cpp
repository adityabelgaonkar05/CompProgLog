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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i].first;
            a[i].second = i + 1;
        }

        vector<pair<int, int>> news;

        for (auto x : a)
        {
            int cond = 1;
            for (int i = 30; i >= 0; --i)
            {
                if (((1 << i) & k) && ((1 << i) & x.first))
                {
                    continue;
                }

                else if (((1 << i) & x.first))
                {
                    continue;
                }

                else if (!((1 << i) & k) && !((1 << i) & x.first))
                    continue;

                else
                {
                    cond = 0;
                    break;
                }
            }

            if (cond)
                news.push_back(x);
        }

        // int ans = *max_element(news.begin(), news.end());
        int ans = INT_MAX;

        for (auto i : news)
            ans &= i.first;

        if (ans == k)
        {
            cout << "YES\n";
            cout << news.size() << '\n';
            for (auto i : news)
                cout << i.second << ' ';
            cout << '\n';
        }

        else
            cout << "NO\n";
    }

    return 0;
}