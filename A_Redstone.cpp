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

        set<int> s(a.begin(), a.end());

        if (s.size() == a.size())
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}