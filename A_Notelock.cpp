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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == '1')
            {
                auto it = find(s.begin() + i - k + 1, s.begin() + i, '1');
                if (it == s.begin() + i)
                {
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}