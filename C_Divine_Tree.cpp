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
        int n, m;
        cin >> n >> m;

        if ((m > (n * (n + 1) / 2)) || m < n)
        {
            cout << -1 << '\n';
            continue;
        }

        int left = n - 1;
        int target = m;

        set<int> ss;
        for (int i = 1; i <= n; ++i)
        {
            ss.insert(i);
        }

        vector<int> tree;

        while (tree.size() < n)
        {
            auto itr = ss.rbegin();
            if (target - left > *itr)
            {
                tree.push_back(*itr);
                target -= *itr;
                ad
                    left--;
                ss.erase(*itr);
            }
            else
            {
                auto it = ss.find(target - left);
                if (it == ss.end())
                {
                    break;
                }

                target -= *it;
                left--;
                tree.push_back(*it);
                ss.erase(it);
            }
        }

        for (auto i : ss)
            tree.push_back(i);

        cout << tree[0] << '\n';

        for (int i = 0; i < n - 1; ++i)
        {
            cout << tree[i] << ' ' << tree[i + 1] << '\n';
        }
    }

    return 0;
}