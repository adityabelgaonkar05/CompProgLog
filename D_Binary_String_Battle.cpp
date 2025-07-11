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

        int cc = 0;

        for (auto i : s)
            if (i == '1')
                cc++;

        if (cc <= k)
        {
            cout << "Alice\n";
            continue;
        }

        else if (k * 2 > n)
        {
            cout << "Alice\n";
        }

        else
            cout << "Bob\n";
    }

    return 0;
}