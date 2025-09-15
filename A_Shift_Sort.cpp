#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
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
        string s;
        cin >> s;

        int ans = 0;
        int cn = 0;

        for (auto i : s)
        {
            if (i == '0')
                cn++;
        }

        for (int i = 0; i < cn; ++i)
        {
            if (s[i] == '1')
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}