#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (auto &i : a)
        cin >> i.second >> i.first;
    sort(a.begin(), a.end());

    int ans = 1;
    pair<int, int> curr = a[0];

    for (int i = 1; i < n; ++i)
    {
        if (curr.first <= a[i].second)
        {
            curr = a[i];
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}