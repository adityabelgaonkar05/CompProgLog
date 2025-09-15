#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
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
        vector<int> p(n);
        for (auto &i : p)
            cin >> i;

        vector<int> q;

        for (int i : p)
        {
            q.push_back((n + 1) - i);
        }

        for (auto i : q)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}