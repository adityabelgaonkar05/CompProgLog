#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    if (n == m)
        cout << "1\n"
             << n << '\n';

    else if (n < m)
    {
        cout << "3\n"
             << n * 3 - m - m - 1 << ' ' << m << ' ' << m + 1;
    }

    else
    {
        cout << "3\n"
             << m - 1 << ' ' << m << ' ' << n * 3 - m - m + 1;
    }

    return 0;
}

// consider for -1e6 and 1e6