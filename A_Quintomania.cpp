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

        bool cond = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (abs(a[i] - a[i + 1]) != 5 && abs(a[i] - a[i + 1]) != 7)
            {
                cond = 1;
                break;
            }
        }

        if (cond)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}