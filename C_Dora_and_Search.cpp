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
        multiset<int> ms(a.begin(), a.end());

        int l = 0, r = n - 1;

        while (l < r && ms.size())
        {
            bool change = 1;
            if (a[l] == *ms.begin())
            {
                ms.erase(a[l++]);
                change = 0;
                continue;
            }
            if (a[r] == *ms.begin())
            {
                ms.erase(a[r--]);
                change = 0;
                continue;
            }
            if (a[r] == *ms.rbegin())
            {
                ms.erase(a[r--]);
                change = 0;
                continue;
            }
            if (a[l] == *ms.rbegin())
            {
                ms.erase(a[l++]);
                change = 0;
                continue;
            }

            if (change)
                break;
        }

        if (l < r)
            cout << l + 1 << ' ' << r + 1 << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}