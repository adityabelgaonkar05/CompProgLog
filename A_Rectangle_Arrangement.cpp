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
        int maxx = 0;
        int maxy = 0;

        int n;
        cin >> n;

        while (n--)
        {
            int x, y;
            cin >> x >> y;
            maxx = max(x, maxx);
            maxy = max(maxy, y);
        }

        cout << 2 * maxx + 2 * maxy << '\n';
    }

    return 0;
}