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

        multiset<int> setbits;

        for (int i = 0; i < 30; ++i)
        {
            if (r & (1 << i))
                setbits.insert(i);
            else if (l & (1 << i))
                setbits.insert(i);
        }

        int a = r, b = l;

        int c = 0;

        for (int i = 0; i < *setbits.rbegin(); ++i)
        {
            if (setbits.count(i) == 0 || setbits.count(i) == 1)
            {
                c += (1 << i);
            }
        }

        if (c <= l)
        {
            // recalculate c

            c = l;

            for (int i = 0; i < *setbits.rbegin(); ++i)
            {
                if (setbits.count(i) == 0 || setbits.count(i) == 1)
                {
                    if (c + (1 << i) < r)
                    {
                        c += (1 << i);
                    }
                    else
                        break;
                }
            }
        }

        cout << a << ' ' << b << ' ' << c << '\n';
    }

    return 0;
}