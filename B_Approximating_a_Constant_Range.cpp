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

    int ans = 0;

    multiset<int> ms;
    ms.insert(a[0]);

    int left = 0;

    for (int i = 1; i < n; ++i)
    {
        ms.insert(a[i]);

        while ((*ms.rbegin()) - (*ms.begin()) > 1)
        {
            auto it = ms.find(a[left++]);
            ms.erase(it);
        }

        ans = max(ans, i - left + 1);
    }

    cout << ans << '\n';

    return 0;
}