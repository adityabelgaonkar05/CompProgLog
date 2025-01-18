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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);

        int sum = 0;
        for (auto &i : a)
        {
            cin >> i;
            sum += i;
        }

        int ans = 0;

                cout << ans << '\n';
    }

    return 0;
}