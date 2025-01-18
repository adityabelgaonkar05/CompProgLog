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
        vector<int> a(n), b(n);

        for (auto &i : a)
        {
            cin >> i;
        }

        for (auto &i : b)
            cin >> i;

        int numd = 0;
        int required = 0;
        int extra = INT64_MAX;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < b[i])
            {
                numd++;
                if (numd > 1)
                    break;
                required += b[i] - a[i];
            }

            else
            {
                extra = min(extra, (a[i] - b[i]));
            }
        }

        if (numd > 1)
            cout << "NO\n";
        else if (extra >= required)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}