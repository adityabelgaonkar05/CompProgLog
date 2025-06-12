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

        int is5 = 0;
        int is10 = 0;

        for (auto &i : a)
        {
            cin >> i;
            if (i % 10 == 5 || i % 10 == 0)
                is5++;
        }

        if (is5)
        {
            bool isposs = 1;
            if (is5 != n)
                isposs = 0;

            int r1 = a[0];
            if (r1 % 10 == 5)
                r1 += 5;

            for (int i : a)
            {
                int el = i;
                if ((el % 10))
                    el += 5;
                if (el != r1)
                {
                    isposs = 0;
                    // cout << r1 << ' ' << el << ' ';
                    break;
                }
            }

            if (isposs)
                cout << "Yes\n";
            else
                cout << "No\n";

            continue;
        }

        int el = *min_element(a.begin(), a.end());

        set<int> g1({1, 2, 4, 8});
        set<int> g2({3, 6, 7, 9});

        bool poss = 1;

        for (int i : a)
        {
            if ((g1.find(el % 10) != g1.end() && g1.find(i % 10) != g1.end()) || (g2.find(el % 10) != g2.end() && g2.find(i % 10) != g2.end()))
            {
                if ((((el / 10) % 10) & 1) != (((i / 10) % 10) & 1))
                {
                    poss = 0;
                    // cout << el << ' ' << i << ' ';
                    break;
                }
            }
            else
            {
                if ((((el / 10) % 10) & 1) == (((i / 10) % 10) & 1))
                {
                    poss = 0;
                    // cout << el << ' ' << i << ' ';
                    break;
                }
            }
        }

        if (poss)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}