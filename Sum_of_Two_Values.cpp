#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    map<int, pair<int, int>> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
        if (mp[b[i]].first)
            mp[b[i]].second = i + 1;
        else
            mp[b[i]] = {i + 1, -1};
    }

    sort(b.begin(), b.end());

    int l = 0, r = n - 1;
    int ans = 1;

    while (l < r)
    {
        if (b[l] + b[r] == k)
        {
            if (b[l] != b[r])
                cout << mp[b[l]].first << ' ' << mp[b[r]].first << '\n';
            else
                cout << mp[b[l]].first << ' ' << mp[b[l]].second << '\n';
            ans = 0;
            break;
        }

        else if (b[l] + b[r] < k)
        {
            l++;
        }

        else
        {
            r--;
        }
    }

    if (ans)
        cout << "IMPOSSIBLE\n";

    return 0;
}