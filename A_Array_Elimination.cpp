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

        set<int> s;

        for (int i = 1; i <= n; ++i)
            s.insert(i);

        for (int j = 0; j < 30; ++j)
        {
            int c = 0;
            int tocheck = (1 << j);

            for (int x : a)
            {
                if (tocheck & x)
                    c++;
            }

            set<int> tp({1});

            for (int i = 2; i * i <= c; ++i)
            {
                if (c % i == 0)
                {
                    tp.insert(c / i);
                    tp.insert(i);
                }
            }

            set<int> nw;
            for (auto i : tp)
            {
                if (s.find(i) != s.end())
                    nw.insert(i);
            }

            s = move(nw);
        }

        for (auto &i : s)
            cout << i << ' ';

        cout << '\n';
    }

    return 0;
}