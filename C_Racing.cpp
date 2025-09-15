#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
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

        int maxh = 0;
        int minh = 0;

        vector<pair<int, int>> pp;

        bool poss = 1;

        for (int i = 0; i < n; ++i)
        {
            int x, b;
            cin >> x >> b;
            pp.push_back({x, b});

            if (a[i] == 1)
            {
                maxh++;
                minh++;
            }

            else if (a[i] == -1)
            {
                maxh++;

                if (maxh > b)
                {
                    a[i] = 0;
                    maxh--;
                }
            }

            maxh = min(maxh, b);
            minh = max(minh, x);

            if (maxh < minh)
            {
                poss = 0;
            }
        }

        if (!poss)
        {
            cout << "-1\n";
            continue;
        }

        vector<int> h(n + 1);
        h[n] = minh;

        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] != -1)
            {
                h[i] = h[i + 1] - a[i];
            }
            else
            {
                if (h[i + 1] >= pp[i].first)
                {
                    a[i] = 1;
                    h[i] = h[i + 1] - 1;
                }
                else
                {
                    a[i] = 0;
                    h[i] = h[i + 1];
                }
            }
        }

        for (auto i : a)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}