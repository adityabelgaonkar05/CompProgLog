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

        // need to divide each number with same amount of i + 1and n - i

        int num = a[0] * n - a[n - 1];
        int den = n * n - 1;

        if (num < 0 || num % den != 0)
        {
            cout << "NO" << '\n';
            continue;
        }

        int y = num / den;
        int x = a[0] - n * y;
        if (x < 0)
        {
            cout << "NO" << '\n';
            continue;
        }

        bool cond = true;

        for (int i = 0; i < n; i++)
        {
            int gg = x * (i + 1) + y * (n - i);
            if (a[i] != gg)
            {
                cond = false;
                break;
            }
        }

        if (cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
