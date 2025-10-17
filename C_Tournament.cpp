#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());

    vector<int> ub, lb;

    for (int i = 0; i <= n / 2; ++i)
    {
        if (i == n / 2)
        {
            ub.push_back(a[i] + a[i + 1]);
            lb.push_back(a[i] + a[i - 1]);
        }

        else
        {
            ub.push_back(a[i] + a[n - i - 1]);
            lb.push_back(a[i] + a[n - i - 2]);
        }
    }

    multiset<int> ubms(ub.begin(), ub.end()), lbms(lb.begin(), lb.end());

    int ans1 = 1000000000, ans2 = 10000000000;

    for (auto i : ub)
    {
        ubms.erase(ubms.find(i));
        ans1 = min(ans1, *ubms.rbegin() - *ubms.begin());
        ubms.insert(i);
    }

    for (auto i : lb)
    {
        lbms.erase(lbms.find(i));
        ans2 = min(ans2, *lbms.rbegin() - *lbms.begin());
        lbms.insert(i);
    }

    cout << min(ans1, ans2);

    return 0;
}