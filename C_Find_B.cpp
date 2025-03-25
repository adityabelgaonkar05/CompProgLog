#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<int> pre;
        vector<int> sumof1s;
        sumof1s.push_back(0);
        int sum1 = 0;
        pre.push_back(0);

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 1)
                sum1++;
            sumof1s.push_back(sum1);
            pre.push_back(pre.back() + a[i]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int onesum = sumof1s[r] - sumof1s[l - 1];
            int total = pre[r] - pre[l - 1];
            int nonones = r - l - onesum + 1;
            if (l == r)
                cout << "NO\n";
            else if (total - onesum * 2ll >= nonones)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}