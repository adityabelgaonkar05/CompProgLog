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
        int maxp = 2147483647;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != i)
                maxp &= a[i];

            // cout << maxp << ' ';
        }

        cout << maxp << '\n';
    }

    return 0;
}