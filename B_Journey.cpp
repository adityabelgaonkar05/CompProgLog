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
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int sum = a + b + c;
        int ans = n / sum * 3;
        int distcovered = ans / 3 * sum;

        // cout << distcovered << ' ';

        if (distcovered < n)
        {
            distcovered += a;
            ans++;
        }
        if (distcovered < n)
        {
            distcovered += b;
            ans++;
        }
        if (distcovered < n)
        {
            distcovered += c;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}