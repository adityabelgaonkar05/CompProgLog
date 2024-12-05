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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (auto &i : a)
            cin >> i;

        for (auto &i : b)
            cin >> i;

        vector<int> uniel;
        uniel.push_back(b[0]);

        for (int i = 1; i < b.size(); ++i)
        {
            if (b[i] != uniel.back())
                uniel.push_back(b[i]);
        }

        bool cond = 0;

        for (int i = 0; i < min(a.size(), uniel.size()); ++i)
        {
            if (a[i] != uniel[i])
            {
                cond = 1;
                break;
            }
        }

        if (cond)
            cout << "TIDAK\n";
        else
            cout << "YA\n";
    }

    return 0;
}