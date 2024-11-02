#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int findClosestLE(set<int> &all1100s, int n) // template
{
    auto it = all1100s.lower_bound(n);
    if (it != all1100s.end() && *it == n)
        return *it;
    if (it == all1100s.begin())
        return -1;
    --it;
    return *it;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int q;
        cin >> q;
        vector<pair<int, char>> a(q);
        for (auto &i : a)
            cin >> i.first >> i.second;

        set<int> all1100s;
        for (int i = 0; i < s.size() - 3; ++i)
        {
            if (s.substr(i, 4) == "1100")
            {
                all1100s.insert(i);
                i += 3;
            }
        }

        for (auto i : a)
        {
            int pos = i.first - 1;
            if (s[pos] != i.second)
            {
                s[pos] = i.second;

                int check = findClosestLE(all1100s, pos);
                if (check != -1 && pos - check <= 3)
                    all1100s.erase(check);

                for (int j = max(0ll, pos - 3); j <= min(pos, (long long)s.size() - 4); ++j)
                {
                    if (s.substr(j, 4) == "1100")
                        all1100s.insert(j);
                }
            }

            cout << (all1100s.empty() ? "NO" : "YES") << endl;
        }
    }

    return 0;
}
