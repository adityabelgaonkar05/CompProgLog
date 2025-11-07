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
        vector<pair<int, int>> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i].first >> b[i];
            a[i].second = b[i];
        }

        //  sort by a[i]
        // all b[i] > a[i], but lesser than b[i]

        sort(a.begin(), a.end());

        
    }

    return 0;
}