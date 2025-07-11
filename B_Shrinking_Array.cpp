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

        bool obv = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (abs(a[i] - a[i + 1]) <= 1)
            {
                obv = 1;
                break;
            }
        }

        if (obv)
        {
            cout << 0 << '\n';
            continue;
        }

        vector<int> temp(a.begin(), a.end());
        if (is_sorted(temp.begin(), temp.end()))
            cout << "-1\n";
        else
            cout << "1\n";
    }

    return 0;
}