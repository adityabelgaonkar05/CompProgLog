#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (auto &i : a)
        cin >> i;

    int l = 0, r = n - 1;
    int ans = 0;

    while (l <= r)
    {
        vector<int> b(a.begin(), a.begin() + 1 + l);
        sort(b.rbegin(), b.rend());

        int curr = 0;
        int c = 0;

        for (int i = 0; i < b.size(); i += 2)
        {
            if (b[i] <= k - curr)
            {
                c++;
            }
            else
                break;

            if ((i + 1 < b.size()) && b[i + 1] <= k - curr)
            {
                c++;
            }

            if (i + 1 < b.size())
                curr += max(b[i], b[i + 1]);
            else
                curr += b[i];
        }

        ans = max(ans, c);
        l++;
    }

    cout << ans << '\n';

    return 0;
}