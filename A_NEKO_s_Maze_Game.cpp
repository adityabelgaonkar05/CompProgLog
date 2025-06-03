#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(2, vector<int>(n));
    vector<pair<int, int>> q(k);

    for (auto &i : q)
        cin >> i.first >> i.second;

    int blocks = 0;

    for (auto i : q)
    {
        a[i.first - 1][i.second - 1] ^= 1;

        bool right = 0;
        bool left = 0;
        bool upown = 0;

        upown = (a[(i.first - 1) ^ 1][i.second - 1]);
        if (i.second - 1 < n - 1)
        {
            right = (a[(i.first - 1) ^ 1][i.second]);
        }
        if (i.second - 1 > 0)
        {
            left = (a[(i.first - 1) ^ 1][i.second - 2]);
        }

        if (a[i.first - 1][i.second - 1] && (right || left || upown))
        {
            blocks++;
        }

        else if (!a[i.first - 1][i.second - 1] && (right || left || upown))
        {
            blocks--;
        }

        if (blocks)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}