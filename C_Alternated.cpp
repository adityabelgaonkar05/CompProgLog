#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;

    for (int i = 0; i < 2 * n; ++i)
    {
        if (s[i] == 'A')
            a.push_back(i);
        else
            b.push_back(i);
    }

    int ans1 = 0, ans2 = 0;

    for (int i = 1; i < 2 * n; i += 2)
    {
        ans1 += abs(i - a[i / 2]);
    }

    for (int i = 1; i < 2 * n; i += 2)
    {
        ans2 += abs(i - b[i / 2]);
    }

    cout << min(ans1, ans2);

    return 0;
}