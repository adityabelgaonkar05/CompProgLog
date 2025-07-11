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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b + 1 && (a & 1))
            cout << y << '\n';
        else if (a > b)
            cout << -1 << '\n';

        else
        {
            int score = 0;
            while (a < b)
            {
                if (a & 1)
                {
                    score += x;
                    a++;
                }
                else
                {
                    score += (min(x, y));
                    a++;
                }
            }

            cout << score << '\n';
        }
    }

    return 0;
}