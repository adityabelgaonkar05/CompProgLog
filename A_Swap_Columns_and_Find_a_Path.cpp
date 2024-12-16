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
        vector<pair<int, int>> a(n);

        for (auto &i : a)
            cin >> i.first;

        for (auto &i : a)
            cin >> i.second;

        vector<pair<int, int>> f, s, e;

        for (auto i : a)
        {
            if (i.first > i.second)
                f.push_back(i);
            else if (i.first == i.second)
                e.push_back(i);
            else
                s.push_back(i);
        }

        sort(f.begin(), f.end());
        sort(e.begin(), e.end());
        sort(s.begin(), s.end(), [](const pair<int, int> &c, const pair<int, int> &b)
             { return c.second > b.second; });

        vector<int> path;

        int ans = 0;
        for (int i = 0; i < f.size(); ++i)
        {
            ans += f[i].first;
            path.push_back(f[i].first);
            // cout << f[i].first << ' ';
        }

        for (auto i : e)
        {
            ans += i.first;
            path.push_back(i.first);
            // cout << i.first << ' ';
        }

        if (e.size())
        {
            ans += e.back().first;
            path.push_back(e.back().first);
        }

        else if (f.size() && s.size())
        {
            ans += max(f.back().second, s[0].first);
        }

        else if (f.size())
        {
            ans += f.back().second;
        }

        else
        {
            ans += s[0].first;
        }

        for (int i = 0; i < s.size(); ++i)
        {
            ans += s[i].second;
            path.push_back(s[i].second);
            // cout << s[i].first << ' ';
        }

        // cout << '\n';

        // for (int i = 0; i < f.size(); ++i)
        // {
        //     cout << f[i].second << ' ';
        // }
        // for (auto i : e)
        //     cout << i.second << ' ';

        // for (int i = 0; i < s.size(); ++i)
        // {
        //     cout << s[i].second << ' ';
        // }

        // cout << '\n';

        // for (auto i : path)
        //     cout << i << ' ';
        // cout << '\n';

        cout << ans << '\n';
    }

    return 0;
}