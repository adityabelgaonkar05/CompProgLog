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
        {
            cin >> i;
        }

        sort(a.begin(), a.end());

        vector<int> b;

        int k = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] == a[i + 1])
            {
                b.push_back(a[i]);
                ++i;
            }

            k = i;

            if (b.size() > 1)
                break;
        }

        for (int i = n - 1; i > k + 1; --i)
        {
            if (a[i] == a[i - 1])
            {
                b.push_back(a[i]);
                --i;
            }
            if (b.size() > 3)
                break;
        }

        sort(b.begin(), b.end());

        if (b.size() < 4)
            cout << "NO\n";

        else
        {
            cout << "YES\n";
            cout << b[0] << ' ' << b[1] << ' ' << b[0] << ' ' << b[3] << ' ' << b[2] << ' ' << b[1] << ' ' << b[2] << ' ' << b[3] << '\n';
        }
    }

    return 0;
}