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
        multiset<int> prev;
        multiset<int> next;

        for (auto &i : a)
        {
            cin >> i;
            next.insert(i);
        }

        // if smallest or largest
        // if there are only smaller elements ahead and only larger elements behind

        for (auto i : a)
        {
            prev.insert(i);
            auto it = next.find(i);
            next.erase(it);

            if (next.empty())
                next.insert(-1);

            if (i <= *prev.begin() && i <= *next.begin())
                cout << '1';
            else if (i >= *prev.rbegin() && i >= *next.rbegin())
                cout << '1';

            else if (i >= *next.rbegin() || i <= *prev.begin())
                cout << '1';
            else
                cout << '0';
        }

        cout << '\n';
    }

    return 0;
}