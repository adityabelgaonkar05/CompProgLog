#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    pair<int, int> left, right, top, bot;
    vector<pair<int, int>> p;
    int a, b;
    cin >> a >> b;
    n--;

    left = {a, b};
    right = {a, b};
    top = {a, b};
    bot = {a, b};

    p.push_back({a, b});

    while (n--)
    {
        cin >> a >> b;
        p.push_back({a, b});
        if (a < left.first)
        {
            left = {a, b};
        }
        if (a > right.first)
        {
            right = {a, b};
        }
        if (b < bot.second)
        {
            bot = {a, b};
        }
        if (b > top.second)
        {
            top = {a, b};
        }
    }

    pair<int, int> mid;
    mid.first = (right.first - left.first) / 2 + left.first;
    mid.second = (top.second - bot.second) / 2 + bot.second;

    // cout << mid.first << ' ' << mid.second << '\n';

    int ans = 0;

    for (auto i : p)
    {
        ans = max(max(abs(mid.first - i.first), abs(mid.second - i.second)), ans);
    }

    cout << ans << '\n';

    return 0;
}