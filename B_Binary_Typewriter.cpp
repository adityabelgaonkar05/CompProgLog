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
        string s;
        cin >> s;

        int first1 = INT_MAX, zerobefore1 = -1;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                first1 = i;
                break;
            }
        }

        for (int i = first1 + 1; i < n - 1; ++i)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                zerobefore1 = i;
            }
        }

        if (zerobefore1 == -1 && s[n - 1] == '0')
        {
            zerobefore1 = n - 1;
        }

        if (first1 == INT_MAX)
        {
            cout << n << '\n';
        }

        else if (zerobefore1 == -1 && first1 == 0)
        {
            cout << n + 1 << '\n';
        }

        else
        {
            reverse(s.begin() + first1, s.begin() + zerobefore1 + 1);

            // cout << s << ' ';

            int score = 0;
            char curr = '0';

            for (auto i : s)
            {
                if (i == curr)
                {
                    score++;
                }
                else
                {
                    score += 2;
                    curr = i;
                }
            }

            cout << score << '\n';
        }
    }

    return 0;
}