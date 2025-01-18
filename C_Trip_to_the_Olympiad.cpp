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
        int l, r;
        cin >> l >> r;
        int a = r;
        int b = 0;

        for (int i = 0; i <= 30; ++i)
        {
            if ((1 << i) > a)
                break;
            if (a & (1 << i))
                continue;
            else
                b += (1 << i);
        }

        b = max(l, b);

        int c = 0;
        int h = a ^ b;

        for (int i = 0; i <= 30; ++i)
        {
            if (h & (1 << i))
                continue;
            else
                c += (1 << i);
        }

        c = min(l, c);
        if (b == c)
        {
            if (b == l)
                b++;
            else
                b--;
        }
        cout << b << ' ' << a << ' ' << c << '\n';
        // cout << (a ^ b) + (b ^ c) + (a ^ c) << '\n';
    }

    return 0;
}