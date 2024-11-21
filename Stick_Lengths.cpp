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

    sort(a.begin(), a.end());
    vector<int> b;
    b.push_back(0);
    b.push_back(a[0]);

    for (int i = 1; i < n; ++i)
    {
        b.push_back(a[i] + b.back());
    }

    int ans = INT64_MAX;

    for (int i = 0; i < n; ++i)
    {
        int score = (b[n] - b[i + 1]) - (n - i - 1) * a[i];
        score += (a[i] * i) - (b[i] - b[0]);
        ans = min(ans, score);
    }

    cout << ans << '\n';

    // cout << '\n';
    // for (int i : b)
    //     cout << i << ' ';

    return 0;
}