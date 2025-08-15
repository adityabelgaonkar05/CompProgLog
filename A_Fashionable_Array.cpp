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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int ans = 0;

        sort(a.begin(), a.end());

        vector<int> b(a.begin(), a.end());
        while (a.size() > 1)
        {
            if ((a[0] & 1) == (a.back() & 1))
            {
                break;
            }
            else
            {
                ans++;
                a.erase(a.begin());
            }
        }

        int ans2 = 0;

        while (b.size() > 1)
        {
            if ((b[0] & 1) == (b.back() & 1))
            {
                break;
            }
            else
            {
                ans2++;
                b.pop_back();
            }
        }

        cout << min(ans, ans2) << '\n';
    }

    return 0;
}