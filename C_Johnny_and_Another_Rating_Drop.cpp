#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // if (1ll << i) & x -> sum += (1ll << (i + 1)) - 1

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;

        for (int i = 0; i < 63; ++i)
        {
            if ((1ll << i) & n)
                sum += (1ll << (i + 1)) - 1;
        }

        cout << sum << '\n';
    }

    return 0;
}