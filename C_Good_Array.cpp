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
    vector<int> a(n);
    int sum = 0;

    for (auto &i : a)
    {
        cin >> i;
        sum += i;
    }

    multiset<int> ms(a.begin(), a.end());

    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        int m = a[i];
        ms.erase(ms.find(m));
        sum -= m;

        if (*ms.rbegin() * 2 == sum)
            ans.push_back(i + 1);
        ms.insert(m);
        sum += m;
    }

    cout << ans.size() << '\n';
    for (auto &i : ans)
        cout << i << ' ';

    return 0;
}