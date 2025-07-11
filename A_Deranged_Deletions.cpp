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

        if (is_sorted(a.begin(), a.end()))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n"
                 << 2 << '\n';

            for (int i = 0; i < n - 1; ++i)
            {
                if (a[i] > a[i + 1])
                {
                    cout << a[i] << ' ' << a[i + 1] << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}