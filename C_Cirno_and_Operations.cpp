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
        int maxsum = INT64_MIN;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        maxsum = max(maxsum, accumulate(a.begin(), a.end(), 0ll));

        for (int pp = n; pp > 1; --pp)
        {
            vector<int> b, c;

            for (int i = 1; i < a.size(); ++i)
            {
                b.push_back(a[i] - a[i - 1]);
            }

            reverse(a.begin(), a.end());

            for (int i = 1; i < a.size(); ++i)
            {
                c.push_back(a[i] - a[i - 1]);
            }

            int sumb = accumulate(b.begin(), b.end(), 0ll);
            int sumc = accumulate(c.begin(), c.end(), 0ll);

            if (sumb > sumc)
            {
                a = b;
                maxsum = max(maxsum, sumb);
            }

            else
            {
                a = c;
                maxsum = max(maxsum, sumc);
            }
        }

        cout << maxsum << '\n';
    }

    return 0;
}