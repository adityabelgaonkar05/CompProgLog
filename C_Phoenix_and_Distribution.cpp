#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int lsl = n / k;
        if (n < k * 2)
            lsl = 1;

        sort(s.begin(), s.end());

        cout << lsl << '\n';
    }

    return 0;
}