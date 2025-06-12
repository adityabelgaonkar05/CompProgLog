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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int zerog = 0;
        int tk = k;
        int oneg = 0;

        // k such indices that have same n - i - 1 character

        for (auto i : s)
        {
            if (i == '1')
                oneg++;
            else
                zerog++;
        }

        int fin = 0;

        for (int i = 0; i < n; ++i)
        {
            if (k-- <= 0)
            {
                fin = i;
                break;
            }

            if (zerog >= 2 && zerog >= oneg)
            {
                s[i] = '0';
                s[n - i - 1] = '0';
                zerog -= 2;
            }
            else if (oneg >= 2)
            {
                s[i] = '1';
                s[n - i - 1] = '1';
                oneg -= 2;
            }
            else
            {
                fin = i;
                break;
            }
        }

        while (oneg > 0 && zerog > 0)
        {
            s[fin] = '0';
            s[n - fin - 1] = '1';
            fin++;
            oneg--;
            zerog--;
        }

        while (zerog > 0)
        {
            s[fin++] = '0';
            zerog--;
        }
        while (oneg > 0)
        {
            s[fin++] = '1';
            oneg--;
        }

        int ans = 0;

        // cout << s << ' ';

        for (int i = 0; i < n / 2; ++i)
        {
            if (s[i] == s[n - i - 1])
                ans++;
        }

        // cout << ans << ' ';

        if (ans == tk)
            cout << "YES" << '\n';
        else
            cout << "NO\n";
    }

    return 0;
}