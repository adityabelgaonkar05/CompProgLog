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
        vector<int> a(n), b(n);

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        vector<pair<int, int>> ops;

        for (int i = 0; i < n; ++i) // to the stars we gleam so bright, like a fallen angel in its weeping flight, burying sorrow in the tender dusk, where tomorrow breathes hope from the dust
        {
            if (a[i] > n)
            {
                int wow = -1, dis = 1e9;
                for (int j = 0; j < n; ++j)
                {
                    if (b[j] <= n)
                    {
                        if (abs(j - i) < dis)
                        {
                            wow = j;
                            dis = abs(j - i);
                        }
                    }
                }

                if (wow != -1)
                {
                    int c = i;
                    while (c < wow)
                    {
                        swap(a[c], a[c + 1]);
                        ops.push_back({1, c + 1});
                        c++;
                        // if (ops.size() > 1709)
                        //     break;
                    }
                    while (c > wow)
                    {
                        swap(a[c], a[c - 1]);
                        ops.push_back({1, c});
                        c--;
                        // if (ops.size() > 1709)
                        //     break;
                    }

                    swap(a[wow], b[wow]);
                    ops.push_back({3, wow + 1});
                    i--;
                }
            }
        }

        for (auto i : a)
            cout << i << ' ';
        cout << '\n';
        for (auto i : b)
            cout << i << ' ';
        cout << '\n';

        cout << ops.size() << '\n';

        bool cond = 0;

        while (!cond)
        {
            cond = 1;

            for (int i = 0; i < n - 1; ++i)
            {
                if (a[i] > a[i + 1])
                {
                    cond = 0;
                    swap(a[i], a[i + 1]);
                    ops.push_back({1, i + 1});
                    // if (ops.size() > 1709)
                    //     break;
                }
            }
        }

        cond = 0;

        while (!cond)
        {
            cond = 1;

            for (int i = 0; i < n - 1; ++i)
            {
                if (b[i] > b[i + 1])
                {
                    cond = 0;
                    swap(b[i], b[i + 1]);
                    ops.push_back({2, i + 1});
                    // if (ops.size() > 1709)
                    //     break;
                }
            }
        }

        // for (auto i : a)
        //     cout << i << ' ';
        // cout << '\n';
        // for (auto i : b)
        //     cout << i << ' ';

        cout << ops.size() << '\n';
        for (auto i : ops)
            cout << i.first << ' ' << i.second << '\n';

        // cout << '\n';
    }

    return 0;
}