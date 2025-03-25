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

        for (int i = 0; i < n - 1; ++i)
        {
            int minel = min(a[i], a[i + 1]);
            a[i] -= minel;
            a[i + 1] -= minel;
        }

        if (is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// 4 3 2 1
// 1 0 2 1
// 1 0 1 0
// 0 0 0 0
// 4 5 2 3
// 0 1 0 1
// 0 0 0 0

// 4 3 2 1

// 1 2 3 4 5
// 0 0 0 0 1
// 4 3 2 1
// 9 9 8 2
// 0 0 8 2

// 1 2 4 3
// 0 1 4 3
// 0 0 3 3