#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;
    int maxlen = x;
    int l = 0, r = x;

    while (n--)
    {
        int el;
        cin >> el;

        if ((el <= r && el >= l) && el - l >= r - el)
        {
            r = el;
            maxlen = r - l;
        }
        else if (el <= r && el >= l)
        {
            l = el;
            maxlen = r - l;
        }

        cout << maxlen << ' ';
    }

    return 0;
}