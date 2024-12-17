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
        int ans = 0;
        int ones = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == '0')
            {
                ans += (i + 1);
                ones--;
                ones = max(0ll, ones);
            }

            else
                ones++;
        }

        ones = ones / 2 + (ones & 1);

        int p = 0;
        while (ones > 0)
        {
            if (s[p] == '1')
            {
                ans += (p + 1);
                ones--;
            }

            p++;
        }

        cout << ans << '\n';
    }

    return 0;
}