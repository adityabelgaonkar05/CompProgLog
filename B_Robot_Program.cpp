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
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        // find the first time it reaches 0
        // after that find the second time it reaches 0

        int first0 = INT64_MAX;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;

            if (!x)
            {
                first0 = i + 1;
                break;
            }
        }

        if (first0 > k)
        {
            cout << 0 << '\n';
            continue;
        }

        int second0 = INT64_MAX;
        x = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;

            if (!x)
            {
                second0 = i + 1;
                break;
            }
        }

        if (second0 > (k - first0))
        {
            cout << 1 << '\n';
        }

        else
        {
            cout << 1 + (k - first0) / second0 << '\n';
        }
    }

    return 0;
}