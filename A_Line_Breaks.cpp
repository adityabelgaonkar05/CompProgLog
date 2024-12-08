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
        int n, m;
        cin >> n >> m;
        vector<pair<int, string>> a(n);
        for (auto &i : a)
        {
            cin >> i.second;
            i.first = i.second.size();
        }

        // sort(a.begin(), a.end());
        int ans = 0;
        for (auto i : a)
        {
            if (i.first <= m)
            {
                ans++;
                m -= i.first;
                // cout << m << ' ';
            }

            else
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}