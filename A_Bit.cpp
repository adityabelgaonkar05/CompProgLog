#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int x = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[1] == '-')
            x--;
        else
            x++;
    }

    cout << x;

    return 0;
}