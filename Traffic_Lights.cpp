#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;
    set<vector<int>> s, ss;
    s.insert({0, x, x});
    ss.insert({x, 0, x});

    while (n--)
    {
        int el;
        cin >> el;
        auto it = s.lower_bound({el, -1, -1});
        it--;
        auto v = *it;
        auto it2 = ss.lower_bound({v[2], v[0], v[1]});
        auto vv = *it2;

        s.erase(it);
        ss.erase(it2);

        s.insert({v[0], el, el - v[0]});
        s.insert({el, v[1], v[1] - el});

        ss.insert({el - v[0], v[0], el});
        ss.insert({v[1] - el, el, v[1]});

        vector<int> ans = *ss.rbegin();

        cout << ans[0] << ' ';
    }

    return 0;
}