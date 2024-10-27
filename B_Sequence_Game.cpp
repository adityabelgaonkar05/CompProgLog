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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<int> b(1);
        b[0] = a[0];

        for (int i = 1; i < n; ++i)
        {
            if (b.back() > a[i])
                b.push_back(1);
            b.push_back(a[i]);
        }

        cout << b.size() << '\n';
        for (int i : b)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}