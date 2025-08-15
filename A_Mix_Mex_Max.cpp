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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        bool cond = 1;

        set<int> s(a.begin(), a.end());

        if (s.size() == 1 && *s.begin() == -1)
        {
            cout << "YES\n";
            continue;
        }
        else if (s.size() == 2 && *s.begin() == -1 && *s.rbegin() != 0)
        {
            cout << "YES\n";
            continue;
        }
        else
            cout << "NO\n";
    }

    return 0;
}