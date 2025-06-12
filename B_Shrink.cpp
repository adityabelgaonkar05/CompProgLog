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

        int curr = n;

        int ind = n / 2;
        int toadd = -1;

        while (curr)
        {
            a[ind] = curr--;
            ind += toadd;
            if (toadd < 0)
                toadd = abs(toadd) + 1;
            else
                toadd = -1 * (toadd + 1);
        }

        for (auto i : a)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}