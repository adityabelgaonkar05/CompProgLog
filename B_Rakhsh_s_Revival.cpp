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
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int ans = 0;
        int curr = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                curr++;
                if (curr == m)
                {
                    ans++;
                    curr = 0;
                    i += k;
                    i--;
                }
            }
            else
                curr = 0;
        }

        cout << ans << '\n';
    }

    return 0;
}