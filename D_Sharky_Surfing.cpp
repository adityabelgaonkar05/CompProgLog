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
        int n, m, l;
        cin >> n >> m >> l;

        vector<pair<int, int>> hur(n);
        vector<pair<int, int>> pu(m);

        for (auto &i : hur)
            cin >> i.first >> i.second;
        for (auto &i : pu)
            cin >> i.first >> i.second;

        priority_queue<int> unus;

        int temp = 0;
        bool poss = 1;
        int ans = 0;
        int currjump = 1;

        for (auto i : hur)
        {
            if (poss == 0)
                break;
            while ((temp < m) && (pu[temp].first < i.first))
            {
                unus.push(pu[temp].second);
                temp++;
            }

            if (currjump < (i.second - i.first + 2))
            {
                while ((currjump < (i.second - i.first + 2)) && unus.size())
                {
                    currjump += unus.top();
                    ans++;
                    unus.pop();
                }

                if (currjump < (i.second - i.first + 2))
                {
                    poss = 0;
                    break;
                }
            }
        }
        if (poss)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}