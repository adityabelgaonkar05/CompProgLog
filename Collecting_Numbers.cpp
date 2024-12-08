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
        vector<int> places(n + 1);
        set<pair<int, int>> s;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            s.insert({a[i], i});
            places[a[i]] = i;
        }

        for (auto i : s)
        {
            // for (int j = i.second; j < n; ++j)
            // {
            //     if (i.first <= a[j])
            //     {
            //         s.erase({a[j], places[a[j]]});
            //     }

            //     else break;
            // }

            // s.erase(i);
        }
    }

    return 0;
}