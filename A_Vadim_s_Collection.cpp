#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        multiset<char> ms;
        string s;
        cin >> s;

        for (auto i : s)
            ms.insert(i);

        string ans = "";

        for (int i = 9; i >= 0; --i)
        {
            char tofind = '0' + i;
            auto it = ms.lower_bound(tofind);
            ans.push_back(*it);
            ms.erase(it);
        }

        cout << ans << '\n';
    }

    return 0;
}