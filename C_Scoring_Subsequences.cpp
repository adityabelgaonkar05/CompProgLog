#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        multiset<int> ms;

        for (auto &i : a)
            cin >> i;

        for (int i : a)
        {
            ms.insert(i);
            while (*ms.begin() < ms.size())
            {
                ms.erase(ms.begin());
            }
            cout << ms.size() << ' ';
        }

        cout << '\n';
    }

    return 0;
}