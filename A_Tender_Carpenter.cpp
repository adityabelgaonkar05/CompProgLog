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
        int poss = 0;
        for (auto &i : a)
            cin >> i;

        for (int i = 0; i < n - 1; ++i)
        {
            if ((a[i] < 2 * a[i + 1]) && (a[i] * 2 > a[i + 1]))
            {
                poss = 1;
            }
        }

        if (poss)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}