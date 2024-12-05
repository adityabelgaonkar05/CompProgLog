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

        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        int l = 0;
        int r = n - 1;

        while (l < n)
        {
            if (a[l] != b[l])
                break;
            l++;
        }

        while (r >= 0)
        {
            if (a[r] != b[r])
                break;
            r--;
        }

        while (l > 0 && (b[l] >= b[l - 1]))
            l--;

        while (r < n - 1 && (b[r] <= b[r + 1]))
            r++;

        cout << l + 1 << ' ' << r + 1 << '\n';
    }

    return 0;
}