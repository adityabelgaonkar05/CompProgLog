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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    vector<int> ind(n + 1);

    for (int i = 0; i < n; ++i)
    {
        ind[a[i]] = i;
    }

    int ans = 1;

    for (int i = 1; i < n; ++i)
    {
        if (ind[i] > ind[i + 1])
            ans++;
    }

    cout << ans << '\n';

    return 0;
}