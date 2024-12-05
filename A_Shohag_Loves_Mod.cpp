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
        int curr = 1;
        for (int i = 0; i < n; ++i)
        {
            cout << curr << ' ';
            curr += 2;
        }

        cout << '\n';
    }

    return 0;
}