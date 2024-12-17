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
        int b, c, d;
        cin >> b >> c >> d;
        int a = 0;
        int poss = 1;

        for (int i = 61; i >= 0; --i)
        {
            bool currb = ((1ll << i) & b);
            bool currc = ((1ll << i) & c);
            bool currd = ((1ll << i) & d);

            if ((currc == currd) && (currc != currb))
            {
                poss = 0;
                break;
            }
            if ((!currb && !currc && currd) || (currb && currc && !currd))
                a += (1ll << i);
        }

        if (poss)
            cout << a << '\n';
        else
            cout << "-1\n";
    }

    return 0;
}