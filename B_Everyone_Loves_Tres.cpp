#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 66; i < 1000000000; i += 66)
    {
        int cond = 1;
        int tem = i;

        while (tem)
        {
            if ((tem % 10 == 6) || (tem % 10 == 3))
            {
                tem /= 10;
            }

            else
            {
                cond = 0;
                break;
            }
        }

        if (cond)
            cout << i << '\n';
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
    }

    return 0;
}