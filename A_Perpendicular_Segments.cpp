#include <bits/stdc++.h>
#define int long long
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
        int a, b, k;
        cin >> a >> b >> k;
        cout << "0 0 " << min(a, b) << ' ' << min(a, b) << endl;
        cout << "0 " << min(a, b) << ' ' << min(a, b) << " 0" << endl;
    }

    return 0;
}
