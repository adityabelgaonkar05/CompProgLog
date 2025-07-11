#include <bits/stdc++.h>
// #define int long long
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

        vector<int> gr(n, n);

        for (int i = n - 2; i >= 0; --i)
        {
            if (a[i] == a[i + 1])
            {
                gr[i] = gr[i + 1];
            }
            else
            {
                gr[i] = i + 1;
            }
        }

        // for (auto i : gr)
        //     cout << i << ' ';
        // cout << '\n';

        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;

            if (gr[l - 1] < r)
                cout << l << ' ' << gr[l - 1] + 1 << '\n';
            else
                cout << "-1 -1\n";
        }

        cout << '\n';
    }

    return 0;
}