#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    set<int> first, second;
    bool poss = 1;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        if (first.find(a) != first.end())
        {
            if (first.find(b) != first.end())
            {
                poss = 0;
                break;
            }

            second.insert(b);
        }

        else if (second.find(a) != second.end())
        {
            if (second.find(b) != second.end())
            {
                poss = 0;
                break;
            }

            first.insert(b);
        }

        else if (first.find(b) != first.end())
        {
            if (first.find(a) != first.end())
            {
                poss = 0;
                break;
            }

            second.insert(a);
        }

        else if (second.find(b) != second.end())
        {
            if (second.find(a) != second.end())
            {
                poss = 0;
                break;
            }

            first.insert(a);
        }

        else
        {
            first.insert(a);
            second.insert(b);
        }
    }

    if (!poss)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    // for (auto i : first)
    //     cout << i << ' ';
    // cout << '\n';
    // for (auto i : second)
    //     cout << i << ' ';

    for (int i = 1; i <= n; ++i)
    {
        if (first.find(i) != first.end())
        {
            cout << 1 << ' ';
        }
        else
            cout << 2 << ' ';
    }

    return 0;
}