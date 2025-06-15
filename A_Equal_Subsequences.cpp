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
        int n, k;
        cin >> n >> k;
        string s;

        for (int i = 0; i < k; ++i)
        {
            cout << '1';
        }
        for (int i = 0; i < n - k; ++i)
            cout << '0';

        cout << '\n';
    }

    return 0;
}