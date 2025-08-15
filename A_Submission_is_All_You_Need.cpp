#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int summ(multiset<int> &a)
{
    int sum = 0;
    for (auto i : a)
        sum += i;
    return sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> a;
        for (int i = 0; i < n; ++i)
        {
            int el;
            cin >> el;
            a.insert(el);
        }

        int ans = 0;
        bool cond = 1;

        while (cond)
        {
                }

        cout << ans << '\n';
    }

    return 0;
}