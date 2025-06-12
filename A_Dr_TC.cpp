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
        string s;
        cin >> s;

        // num 0s + num 1s * (len - 1)

        int c = 0;

        for (char i : s)
            if (i == '1')
                c++;

        cout << (n - c) + (n - 1) * c << '\n';
    }

    return 0;
}