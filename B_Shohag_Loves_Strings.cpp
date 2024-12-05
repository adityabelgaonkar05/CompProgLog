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
        string s;
        cin >> s;

        int cond = 1;

        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                cout << s[i] << s[i + 1] << '\n';
                cond = 0;
                break;
            }

            else if (i < s.size() - 2)
            {
                if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])
                {
                    cout << s[i] << s[i + 1] << s[i + 2] << '\n';
                    cond = 0;
                    break;
                }
            }
        }

        if (cond)
            cout << -1 << '\n';
    }

    return 0;
}