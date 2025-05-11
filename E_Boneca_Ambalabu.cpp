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

        for (int i = 29; i >= 0; --i)
        {
            int c = 0;

            for (auto x : a)
            {
                if ((1 << i) & x)
                    c++;
            }

            if (!(c & 1))
                ideal += (1 << i);
        }

        int maxs = INT_MIN;
        int ans = a[0];

        for (auto x : a)
        {
            int score = 0;

            for (int i = 29; i >= 0; --i)
            {
                int tocheck = (1 << i);
                if ((ideal & tocheck) && (x & tocheck))
                {
                    score += tocheck;
                }
                else if (!(ideal & tocheck) && !(x & tocheck))
                {
                    score += tocheck;
                }
                else
                    score -= tocheck;
            }

            if (score == maxs)
            {
                ans = max(ans, x);
            }

            if (score > maxs)
            {
                maxs = score;
                ans = x;
            }

            cout << score << ' ';
        }

        int sol = 0;

        // cout << ans << ' ';

        for (auto i : a)
        {
            sol += (i ^ ans);
        }

        cout << sol << '\n';
    }

    return 0;
}

[ "A", "B", "C", "E" ],
    [ "S", "F", "E", "S" ],
    [ "A", "D", "E", "E" ]

    "ABCESEEEFS"