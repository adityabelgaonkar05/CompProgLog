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
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        cout << min(abs(s - a[0]) + abs(a[0] - a.back()), abs(s - a.back()) + abs(a.back() - a[0])) << '\n';
    }

    return 0;
}