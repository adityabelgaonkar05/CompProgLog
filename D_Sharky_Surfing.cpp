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
        int n, m, L;
        cin >> n >> m >> L;
        vector<pair<int, int>> hur(n);
        for (auto &i : hur)
            cin >> i.first >> i.second;
        vector<pair<int, int>> pp(m);
        for (auto &i : pp)
            cin >> i.first >> i.second;

        // sort(hur.begin(), hur.end());
        // sort(pp.begin(), pp.end());

        int currjump = 1;
        int ans = 0;
        int temp = 0;
        priority_queue<pair<int, int>> unusu;

        bool isposs = 1;

        for (int i = 0; i < n && isposs; ++i)
        {
            while ((temp < m) && (pp[temp].first < hur[i].first))
            {
                unusu.push(pp[temp]);
                temp++;
            }

            // for (auto i : unusu)
            //     i.first << ' ' << i.second << '\n';

            if (currjump <= hur[i].second - hur[i].first + 1)
            {
                while ((currjump <= hur[i].second - hur[i].first + 1) && unusu.size())
                {
                    auto el = unusu.top();
                    currjump += el.second;
                    ans++;
                    unusu.pop();
                }

                if (currjump <= hur[i].second - hur[i].first + 1)
                {
                    isposs = 0;
                    break;
                }
            }

            if (!isposs)
                break;
        }

        // cout << currjump << ' ';

        if (!isposs)
            cout
                << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}