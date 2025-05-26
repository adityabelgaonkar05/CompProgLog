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
        for (auto &i : a)
            cin >> i;

        int ideal = 0;

        for (int i = 0; i <= 29; ++i)
        {
            int count = 0;

            for (int x : a)
            {
                if ((1 << i) & x)
                {
                    count++;
                }
            }

            if (!(count & 1))
                ideal += (1 << i);
        }

        int ans = a[0];
        int score = INT64_MIN;

        for (auto x : a)
        {
            int curr = 0;

            for (int i = 0; i < 30; ++i)
            {
                if (((1 << i) & ideal) == ((1 << i) & x))
                {
                    curr += (1 << i);
                }
            }

            if (score <= curr)
            {
                ans = x;
                score = curr;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}