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
        int j, k, n;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        if (k >= 2)
            cout << "YES\n";
        else
        {
            auto jj = max_element(a.begin(), a.end());
            if (a[j - 1] == *jj)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}