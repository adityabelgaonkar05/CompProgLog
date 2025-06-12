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
        multiset<int> ms;

        for (int i = 0; i < n; ++i)
        {
            int el;
            cin >> el;
            ms.insert(el);
        }

        while (ms.size() > 1)
        {
            int l = *ms.begin();
            ms.erase(ms.begin());
            l += *ms.begin();
            ms.erase(ms.begin());

            int x = l - 1;
            ms.insert(x);
        }

        cout << *ms.begin() << '\n';
    }

    return 0;
}