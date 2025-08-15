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
        int k;
        cin >> k;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int currh = a[k - 1];

        vector<int> poss;

        for (int &i : a)
            if (i > currh)
                poss.push_back(i);

        sort(poss.begin(), poss.end());

        int currw = 1;

        bool pos = 1;

        // for (auto i : poss)
        //     cout << i << ' ';

        for (auto i : poss)
        {
            int hdiff = i - currh;
            // cout << hdiff << ' ';
            if (hdiff > 0)
            {
                currw += hdiff;
                if (currw > currh + 1)
                {
                    pos = 0;
                    break;
                }

                currh = i;
            }
        }

        if (pos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}