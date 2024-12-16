#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

void recurdivide(bool &ans, int n, int &m)
{
    if (n == m)
    {
        ans = 1;
        return;
    }
    if (ans == 1)
        return;

    if (n % 3)
        return;
    else
    {
        int left = n / 3;
        int right = 2 * n / 3;
        if (left == m || right == m)
        {
            ans = 1;
            return;
        }
        recurdivide(ans, left, m);
        recurdivide(ans, right, m);
    }

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        bool ans = 0;
        int n, m;
        cin >> n >> m;

        recurdivide(ans, n, m);

        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}