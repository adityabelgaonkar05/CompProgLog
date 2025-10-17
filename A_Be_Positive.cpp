#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int count0 = 0;
        int min1 = 0;

        for (auto &i : a)
        {
            if (i == -1)
                min1++;
            if (i == 0)
                count0++;
        }

        cout << count0 + ((min1 & 1) * 2) << '\n';
    }

    return 0;
}