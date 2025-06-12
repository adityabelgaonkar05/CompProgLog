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
        map<int, int> mpa;
        map<int, int> mpb;

        for (auto &i : a)
        {
            cin >> i;
        }

        for (auto &i : b)
        {
            cin >> i;
        }

        int ans = 0;

        if (a.back() == b.back())
        {
            cout << n << '\n';
            continue;
        }

        for (int i = n - 2; i >= 0; --i)
        {
            if (a[i] == b[i])
            {
                ans = i + 1;
                break;
            }
            if (b[i] == b[i + 1] || a[i] == a[i + 1])
            {
                ans = i + 1;
                break;
            }

            if (mpb[a[i]] || mpa[b[i]] || mpa[a[i]] || mpb[b[i]])
            {
                ans = i + 1;
                break;
            }

            mpa[a[i + 1]]++;
            mpb[b[i + 1]]++;
        }

        cout << ans << '\n';
    }

    return 0;
}