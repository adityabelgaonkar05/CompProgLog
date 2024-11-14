#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;

    for (int i = 1; i <= 31; ++i)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                int toset = 0;
                int x = 0, y = 0;

                for (int k = 0; k < i; ++k)
                {
                    if (k % j == 0)
                    {
                        toset ^= 1;
                    }

                    if (toset)
                        x += (1 << k);
                    else
                        y += (1 << k);
                }

                s.insert(x);
                s.insert(y);
            }
        }
    }

    vector<int> pre(s.begin(), s.end());

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int first = lower_bound(pre.begin(), pre.end(), l) - pre.begin();
        int second = lower_bound(pre.begin(), pre.end(), r) - pre.begin();
        if (pre[second] > r)
            second--;

        int size = second - first + 1;

        cout << size << '\n';
    }

    return 0;
}
