#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    vector<int> edge;

    for (int i = 1; i < n; ++i)
    {
        edge.push_back(a[i] - a[i - 1]);
    }

    return 0;
}