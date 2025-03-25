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

        bool asn = 1;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= i)
            {
                asn = 0;
                break;
            }
            else if (a[i] <= 2 * (n - i - 1))
            {
                asn = 0;
                break;
            }
            else if (a[i] <= 2 * (i))
            {
                asn = 0;
                break;
            }
        }

        if (asn)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}