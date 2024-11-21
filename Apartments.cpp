#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for (auto &i : a)
        cin >> i;

    for (auto &i : b)
        cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    for (int i : a)
    {
        auto jj = lower_bound(b.begin(), b.end(), i - k);
        if (jj == b.end())
            continue;

        int ind = jj - b.begin();

        if (b[ind] <= i + k)
        {
            ans++;
            b[ind] = -500;
        }
    }

    cout << ans << '\n';

    return 0;
}