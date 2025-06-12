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

        vector<int> curr(3, 0);
        vector<int> ideal(3, n);
        int ans = 0;
        while (curr != ideal)
        {
            int mine = min(curr[1], curr[2]);
            curr[0] = min(2 * mine + 1, n);
            ans++;

            if (curr == ideal)
                break;

            mine = min(curr[0], curr[2]);
            curr[1] = min(2 * mine + 1, n);

            ans++;
            if (curr == ideal)
                break;

            mine = min(curr[0], curr[1]);
            curr[2] = min(2 * mine + 1, n);
            ans++;
            if (curr == ideal)
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}