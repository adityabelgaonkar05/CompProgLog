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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<int> pospref, negpref;
        pospref.push_back(0);
        negpref.push_back(0);

        for (int i = 0; i < n; ++i)
        {
            if (a[i] >= 0)
            {
                pospref.push_back(a[i] + pospref.back());
            }

            else
            {
                pospref.push_back(pospref.back());
            }

            if (a[i] < 0)
            {
                negpref.push_back(abs(a[i]) + negpref.back());
            }

            else
            {
                negpref.push_back(negpref.back());
            }
        }

        int ans = 0;

        for (int i = 0; i <= n; ++i)
        {
            int curr = pospref[i] + negpref[n] - negpref[i];
            ans = max(ans, curr);
        }

        cout << ans << '\n';
    }

    return 0;
}