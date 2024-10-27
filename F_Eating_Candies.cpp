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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        for (int i = 1; i < n; ++i)
        {
            a[i] += a[i - 1];
            b[n - 1 - i] += b[n - i];
        }

        int l = 0;
        int r = n - 1;
        int bestl = -1;
        int bestr = -1;

        while (l < r)
        {
            if (a[l] == b[r])
            {
                bestl = l;
                bestr = r;
                l++;
            }

            else if (a[l] > b[r])
            {
                r--;
            }

            else
            {
                l++;
            }
        }

        // for (auto i : a)
        //     cout << i << ' ';
        // cout << '\n';
        // for (auto i : b)
        //     cout << i << ' ';
        // cout << '\n';

        if (bestl == -1)
            cout << "0\n";
        else
            cout << bestl + 1 + (n - bestr) << '\n';
    }

    return 0;
}