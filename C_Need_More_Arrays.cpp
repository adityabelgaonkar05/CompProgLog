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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<int> b;
        b.push_back(a[0]);

        for (auto i : a)
        {
            if (b.back() + 1 < i)
            {
                b.push_back(i);
            }
        }

        cout << b.size() << '\n';
    }

    return 0;
}