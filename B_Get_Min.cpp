#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> ms;
    while (n--)
    {
        int o;
        cin >> o;
        if (o == 2)
        {
            cout << *ms.begin() << '\n';
            ms.erase(ms.begin());
            continue;
        }

        int x;
        cin >> x;
        ms.insert(x);
    }

    return 0;
}