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

        if (s[0] == 's')
            s[0] = '.';
        if (s[n - 1] == 'p')
            s[n - 1] = '.';

        bool ss = 0, pp = 0;

        for (auto i : s)
            i == 's' ? ss = 1 : i == 'p' ? pp = 1
                                         : NULL;

        if (ss && pp)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}