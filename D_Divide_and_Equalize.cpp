#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

void adddivs(map<int, int> &mp, int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        while (!(n % i))
        {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 1)
        mp[n]++;
}

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
        for (auto &i : a)
            cin >> i;

        map<int, int> mp;

        for (int i : a)
        {
            adddivs(mp, i);
        }

        bool cond = 1;

        for (auto i : mp)
        {
            if (i.second % n)
            {
                cond = 0;
                break;
            }
        }

        if (cond)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}