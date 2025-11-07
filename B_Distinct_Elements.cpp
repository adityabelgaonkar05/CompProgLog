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
        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        vector<int> b(1, 1);
        int el = 1;

        for (int i = 1; i < n; ++i)
        {
            if (a[i] - a[i - 1] >= i + 1)
            {
                el++;
                b.push_back(el);
            }
            else
            {
                b.push_back(b[i - a[i] + a[i - 1]]);
            }
        }

        for (auto i : b)
            cout << i << ' ';

        cout << '\n';
    }

    return 0;
}