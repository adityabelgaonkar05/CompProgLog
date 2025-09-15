#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

vector<int> minarray(vector<vector<int>> &a, int ind)
{
    vector<int> mina;
    bool first = 1;
    for (auto &i : a)
    {
        if (ind >= i.size())
            continue;

        vector<int> tt(i.begin() + ind, i.end());
        if (first)
        {
            mina = tt;
            first = 0;
        }

        mina = min(mina, tt);
    }

    return mina;
}

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
        vector<vector<int>> a(n);

        int maxm = 0;

        for (auto &i : a)
        {
            int m;
            cin >> m;
            maxm = max(maxm, m);
            while (m--)
            {
                int el;
                cin >> el;
                i.push_back(el);
            }
        }

        vector<int> ans;

        int currindi = 0;

        while (ans.size() < maxm)
        {
            vector<int> tt = minarray(a, currindi);

            for (int &i : tt)
                ans.push_back(i);
            currindi = ans.size();
        }

        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
