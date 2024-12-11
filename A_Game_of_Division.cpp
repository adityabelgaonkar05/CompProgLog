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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        bool plp = 1;
        int ind = 0;

        for (int i = 0; i < n && plp; ++i)
        {
            bool poss = 1;

            for (int j = 0; j < n; ++j)
            {
                if (i != j)
                {
                    if (!(abs(a[i] - a[j]) % k))
                    {
                        poss = 0;
                        break;
                    }
                }
            }

            if (poss)
            {
                plp = 0;
                ind = i;
            }
        }

        if (!plp)
            cout << "YES\n"
                 << ind + 1 << '\n';
        else
            cout << "NO\n";
    }

    return 0;
}