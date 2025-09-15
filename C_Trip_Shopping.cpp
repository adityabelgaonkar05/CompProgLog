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
        int k;
        cin >> k;

        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;

        for (auto &i : b)
            cin >> i;

        int ans = 0;

        vector<pair<int, int>> pp;

        for (int i = 0; i < n; ++i)
        {
            int mini = min(a[i], b[i]);
            int maxi = max(a[i], b[i]);

            a[i] = mini;
            b[i] = maxi;

            pp.push_back({a[i], b[i]});
        }

        sort(pp.begin(), pp.end());

        int ind = 0;
        int maxval = INT_MIN;

        for (int i = 0; i < n - 1; ++i)
        {
            if (pp[i].second - pp[i + 1].first > maxval)
            {
                maxval = pp[i].second - pp[i + 1].first;
                ind = i;
            }
        }

        vector<int> bb({pp[ind].first, pp[ind].second, pp[ind + 1].first,
                        pp[ind + 1].second});
        sort(bb.begin(), bb.end());

        pp[ind].first = bb[0];
        pp[ind].second = bb.back();
        pp[ind + 1].first = bb[1];
        pp[ind + 1].second = bb[2];

        for (int i = 0; i < n; ++i)
        {
            ans += pp[i].second - pp[i].first;
        }

        cout << ans << '\n';
    }

    return 0;
}