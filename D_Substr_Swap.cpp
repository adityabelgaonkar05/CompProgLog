#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> diff(n + 2);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        diff[a]++;
        diff[b + 1]--;
    }

    int curr = 0;

    for (int i = 1; i <= n; ++i)
    {
        curr += diff[i];
        if (curr & 1)
            swap(s1[i - 1], s2[i - 1]);
    }

    cout << s1 << '\n';

    return 0;
}