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

        int smallestabs = INT_MAX;
        int numnegs = 0;
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < 0)
                numnegs++;
            smallestabs = min(smallestabs, abs(a[i]));
            sum += abs(a[i]);
        }

        if (numnegs & 1)
            sum -= (2 * smallestabs);

        cout << sum << '\n';
    }

    return 0;
}