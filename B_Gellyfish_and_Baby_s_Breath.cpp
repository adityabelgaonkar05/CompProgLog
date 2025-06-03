#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

long long binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2) % 998244353;
    if (b % 2)
        return res * res * a % 998244353;
    else
        return res * res % 998244353;
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
        vector<int> a(n), b(n);
        vector<int> r(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        int al = 0, bl = 0;

        // How to keep track of the largest number in each array

        for (int i = 0; i < n; ++i)
        {
            if (a[al] < a[i])
            {
                al = i;
            }

            if (b[bl] < b[i])
            {
                bl = i;
            }

            // cout << al << i - al << bl << i - bl << ' ';

            r[i] = (max(binpow(2, a[al]) + binpow(2, b[i - al]), binpow(2, b[bl]) + binpow(2, a[i - bl]))) % 998244353;
        }

        for (auto i : r)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}