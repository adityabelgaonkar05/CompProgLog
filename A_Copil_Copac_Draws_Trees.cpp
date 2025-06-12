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
        vector<pair<int, int>> a;
        for (int i = 0; i < n - 1; ++i)
        {
            int e, b;
            cin >> e >> b;
            a.push_back({e, b});
        }

        vector<int> hashmap(n + 1, 0);
        hashmap[1] = 1;
        int lo = 0;

        int c = a.size();

        vector<vector<int>> hh(n + 1, vector<int>(n + 1, 0));

        while (c)
        {
            lo++;
            bool changed = 0;

            for (auto i : a)
            {
                if ((hashmap[i.first] || hashmap[i.second]) && !hh[i.first][i.second])
                {
                    hashmap[i.second] = 1;
                    hashmap[i.first] = 1;
                    hh[i.first][i.second] = 1;
                    c--;
                    changed = 1;
                }
            }

            if (!changed)
                break;
        }

        cout << lo << '\n';
    }

    return 0;
}