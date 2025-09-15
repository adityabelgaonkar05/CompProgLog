#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        s.insert(i);

    int parity = 1;
    auto it = s.begin();

    while (s.size())
    {
        if (parity & 1)
        {
            it++;
        }
        else
        {
            auto er = it;
            cout << *er << ' ';
            it++;
            s.erase(er);
        }
        parity++;
        if (it == s.end())
            it = s.begin();
    }

    return 0;
}