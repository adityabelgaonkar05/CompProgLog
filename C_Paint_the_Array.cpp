#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int result(vector<int> &first, vector<int> &second, vector<int> &a)
{
    for (int x : first)
    {
        bool cond = 1;
        for (int i = 0; i < a.size(); ++i)
        {
            if (i & 1)
            {
                if (!(a[i] % x))
                {
                    cond = 0;
                    break;
                }
            }

            else
            {
                if (a[i] % x)
                {
                    cond = 0;
                    break;
                }
            }
        }

        if (cond)
            return x;
    }

    for (int x : second)
    {
        bool cond = 1;
        for (int i = 0; i < a.size(); ++i)
        {
            if (i & 1)
            {
                if (a[i] % x)
                {
                    cond = 0;
                    break;
                }
            }

            else
            {
                if (!(a[i] % x))
                {
                    cond = 0;
                    break;
                }
            }
        }

        if (cond)
            return x;
    }

    return 0;
}

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

        vector<int> first, second;

        int fgcd = a[0], sgcd = a[1];

        for (int i = 0; i < n; i += 2)
            fgcd = __gcd(fgcd, a[i]);
        for (int i = 1; i < n; i += 2)
            sgcd = __gcd(sgcd, a[i]);

        first.push_back(fgcd);
        second.push_back(sgcd);

        int ans = result(first, second, a);

        cout << ans << '\n';
    }

    return 0;
}