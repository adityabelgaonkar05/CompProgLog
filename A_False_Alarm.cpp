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
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int allopen = 0;
        bool used = 0;
        bool poss = 1;

        for (int i = 0; i < n; ++i)
        {
            if (allopen > 0)
                allopen--;

            else if (a[i] == 1 && !used)
            {
                allopen = x - 1;
                used = 1;
            }
            else if (a[i] == 1)
                poss = 0;
        }

        if (poss)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}