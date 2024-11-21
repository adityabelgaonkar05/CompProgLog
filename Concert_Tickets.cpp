#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<int> a;
    vector<int> b(m);

    for (int i = 0; i < n; ++i)
    {
        int el;
        cin >> el;
        a.insert(el);
    }

    for (auto i : b)
    {
        cin >> i;
        auto it = a.lower_bound(i);
        if (i == *it)
        {
            cout << i << '\n';
            a.erase(it);
        }

        else if (it == a.begin())
        {
            cout << -1 << '\n';
        }

        else
        {
            it--;
            int p = *it;
            cout << p << '\n';
            a.erase(it);
        }
    }

    return 0;
}