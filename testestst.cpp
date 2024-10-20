#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1000000007;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            cout << "no ";
            cout << i << ' ';
            break;
        }
    }

    return 0;
}